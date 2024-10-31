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
    void push(int val);
    void pop();
    int getTop();
    int getSize();
};


void MyStack::push(int val){

    Node* temp = new Node(val,top);
    top  = temp;
    this->size++;

}

void MyStack::pop(){
    if(isEmpty()){
        cout<<"Stack is empty!!"<<endl;
        return;
    }

    Node* temp = top;
    top = top->next;
    delete temp;
    this->size--;
}

int MyStack::getTop(){
    if(isEmpty()){
        cout<<"Stack is empty!!"<<endl;
        return -1;
    }
    return top->val;
}


int MyStack::getSize(){
    return this->size;
}




int main(){

    MyStack st;
    st.push(10);
    st.push(15);
    st.push(12);
    st.push(9);

    cout<<st.getTop()<<endl;

    st.pop();

    cout<<st.getSize()<<endl;
    st.pop();
    st.pop();
    st.pop();

    cout<<st.getTop();

    return 0;
}
