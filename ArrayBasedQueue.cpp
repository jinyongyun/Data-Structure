//
//  ArrayBasedQueue.cpp
//  자료구조_시험대비
//
//  Created by mac on 2022/04/12.
//

#include <iostream>
using namespace std;

class arrQ{
private:
    int * Q;
    int rear;
    int front;
    int capacity;
    
public:
    arrQ(int capacity){
        this->capacity = capacity + 1;
        Q = new int[this->capacity];
        front = rear = 0;
        
        for(int i=0; i< this->capacity; i++){
            Q[i] = 0;
        }
    }
    
    void print(){
        cout << "===============================" <<endl;
        cout << "front index is " << front << endl;
        cout << "rear index is " << rear << endl;
        for(int i=0; i<capacity; i++){
            cout << Q[i] << " ";
            
        }cout << endl;
        cout << "================================" << endl;
    }
    
    bool isFull(){
        return front == (rear+1)%capacity;
    }
    
    
    bool isEmpty(){
        return front == rear;
    }
    
    void _front(){
        if(isEmpty())cout << "Empty" <<endl;
        else cout << Q[(front+1)%capacity] << endl;
    }
    
    void _rear(){
        if (isEmpty()) cout << "Empty" << endl;
        else cout << Q[rear] << endl;
    }
    
    int size(){
        return (rear - front + capacity)%capacity;
    }
    
    void enqueue(int value){
        if(isFull()){cout << "Full" << endl;}
        else{
            rear = (rear + 1)%capacity;
            Q[rear] = value;
        }
    }
    
    
    void dequeue(){
        if(isEmpty()){cout << "Empty" << endl;}
        else {
            front = (front+1)%capacity;
            Q[front]=0;
        }
    }
};

int main(){
    arrQ arQ(5);
    
    arQ.print();
 
}
