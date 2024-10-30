#include<bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int maxSize;
    int *arr;
    int top;
public:
    MyStack(){
        maxSize = 10;
        arr = new int[maxSize];
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    void push(int n){
        if(top >= maxSize){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = n;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int val = arr[top];
        top--;
        return val;
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    int size(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }

        return top + 1;
    }
    
};




int main(){

    return 0;
}