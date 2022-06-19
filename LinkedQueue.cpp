//
//  LinkedQueue.cpp
//  자료구조_시험대비
//
//  Created by mac on 2022/04/12.
//

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList {
public:
    
    Node * front;
    Node * rear;

    LinkedList(){
        this->front = NULL;
        this->rear = NULL;
    }
    
    void addEnd(int data){
        
        Node * newNode = new Node(data);
        if(front==NULL){
            front=rear=newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    
    
    
    void removeFront(){
        
        if(front != NULL){
            Node * tmp = front;
            front = front->next;
            delete tmp;
        }
    }
  
};

class LinkedQueue{
public:
    LinkedList *Q;
    int n;
    
    LinkedQueue(){
        this->Q = new LinkedList();
        this->n = 0;
    }
    
    
    int size(){
        return n;
    }
    
    bool isEmpty(){
        return n==0;
    }
    
    void front(){
        if(isEmpty()){cout << "Empty" << endl;}
        else{
            cout << Q->rear->data << endl;
        }
    }
    
    
    void rear(){
        if(isEmpty()){cout << "Empty" << endl;}
        else {
            cout << Q->rear->data << endl;
        }
    }
    
    void enqueue(int e){
        Q->addEnd(e);
        n++;
    }
    
    void dequeue(){
        if(isEmpty()) cout << "Empty" << endl;
        else{
            Q->removeFront();
            n--;
        }
    }
};
