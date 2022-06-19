//
//  벡터.cpp
//  자료구조_시험대비
//
//  Created by mac on 2022/04/12.
//

#include <iostream>
#include<algorithm>
using namespace std;

class ArrayVector{
private:
    int capacity;
    int n;
    int * A;
    
    
public:
    ArrayVector(int size);
    int size();
    bool empty();
    int& operator[](int i);
    int at(int i);
    void erase(int i);
    void insert(int i, const int& e);
    void reserve(int N);

    
};


ArrayVector::ArrayVector(int size){
    this->capacity = size;
    this->n=0;
    this->A = new int[size];
}

int ArrayVector::at(int i){
    if(i<0 || i >= n){
        return -1;
    } else {
        return A[i];
    }
}


int ArrayVector::size(){
    return n;
}


bool ArrayVector::empty(){
    return (size()==0);
}

void ArrayVector::reserve(int N){
    if(capacity >= N){
        return;
    }
    
    int * B = new int[N];
    for(int i=0; i<n; i++){
        B[i]=A[i];
    }
    
    if(A != NULL){
        delete[] A;
    }
    A=B;
    capacity = N;
}

void ArrayVector::insert(int i, const int& e){
    if(n>=capacity){
        reserve(max(1,2*capacity));
    }
    
    for(int j=n-1; j>=i; j--){
        A[j+1]=A[j];
    }
    
    A[i]=e;
    n++;
}

void ArrayVector::erase(int i){
    for(int j=i+1; j<n; j++){
        A[j-1]=A[j];
    }
    n--;
}

int& ArrayVector::operator[](int i){
    return A[i];
}
