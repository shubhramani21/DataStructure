#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(): val(0),next(nullptr){}

    Node(int val):val(val),next(nullptr){}

    Node(int val, Node* next):val(val), next(next){}
};




class MyQueue{
public:
    int size;
    Node* start;
    Node* end;

    MyQueue(){
        size = 0;
        start = nullptr;
        end = nullptr;
    }

    void Enqueue(int val);
    void Dequeue();
    int peek();
    int getSize();
};



void MyQueue::Enqueue(int val){
    if(start == nullptr && end == nullptr){
        Node* temp = new Node(val);
        start = temp;
        end = temp;
        this->size++;
        return;
    }

    Node* temp = new Node(val);
    end->next = temp;
    end = end->next;
    this->size++;

}

void MyQueue::Dequeue(){
    if(start == nullptr && end == nullptr){
        cout<<"Queue is Empty!!"<<endl;
        return;
    }

    if(start == end){
        Node* temp = start;
        start = nullptr;
        end = nullptr;
        this->size--;
        return;
    }

    Node* temp = start;
    start = start->next;
    this->size--;

    delete temp;
}


int MyQueue::peek(){
    if(start == nullptr && end == nullptr){
        cout<<"Stack is Empty!!"<<endl;
        return -1;
    }
    return start->val;
}



int MyQueue::getSize(){
    return this->size;
}
