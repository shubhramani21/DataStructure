#include<bits/stdc++.h>
using namespace std;

class Node
{
    int val;
    Node* next;

    Node(): val(0),next(nullptr){}

    Node(int val):val(val),next(nullptr){}

    Node(int val, Node* next):val(val), next(next){}
};




class MyStack
{
private:
    Node* top;
    int size;

public:
    MyStack(){
        top = nullptr;
        size = 0;
    }

    bool isEmpty(){
        return top == nullptr;
    }
    void push();
};

