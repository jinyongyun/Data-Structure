//
//  arrStack.cpp
//  자료구조_시험대비
//
//  Created by mac on 2022/04/12.
//

#include <iostream>
using namespace std;

class arrStack{
public:
    int * arr;
    int capacity;
    int t;
    
    arrStack(int cap){
        this->arr=new int[cap];
        this->capacity=cap;
        this->t=-1;
    }
    
    int size(){
        return t+1;
        
    }
    
    bool empty(){
        return t==-1;
    }
    
    int top(){
        if(empty())return -1;
        else return arr[t];
    }
    
    void push(int e){
        if(size()==capacity)cout << "FULL" <<endl;
        else arr[++t]=e;
    }
    
    int pop(){
        if(empty())return -1;
        return arr[t--]; //t에 있는걸 뺀 다음 감소
    }
};



