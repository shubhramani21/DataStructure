#include<bits/stdc++.h>
using namespace std;


class MyQueue
{
private:
    int maxSize;
    int *arr;
    int start;
    int end;
    int currSize;

public:

    MyQueue(){
        maxSize = 10;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }

    bool isEmpty(){
        return (currSize == 0);
    }

    void push(int n){
        if(start == -1 && end == -1){
            start++;
            end++;
            arr[end] = n;
            currSize++;
            return;
        }
        currSize++;
        if(currSize >= maxSize) {
            cout<<"Queue is full"<<endl;
            return;
        }

        end = (end + 1) % maxSize;
        arr[end] = n;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        if(currSize == 1){
            int val = arr[start];
            start = -1;
            end = -1;
            currSize--;
            return val;
        }

        int val = arr[start];
        start = (start + 1) % maxSize;
        currSize--; 
        return val;
    }


    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[start];
    }
    int size(){
        return currSize;
    }
};


int main(){
    return 0;
}