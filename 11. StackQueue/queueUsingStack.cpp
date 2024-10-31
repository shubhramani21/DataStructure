#include<bits/stdc++.h>
using namespace std;

class MyQueue{
private:
    stack<int> s1;
    stack<int> s2;
    int Qsize;
public:
    MyQueue(){
        Qsize = 0;
    }

    void Enqueue(int val);
    void Dequeue();
    int front();
    bool isEmpty();
    int size();
};


void MyQueue::Enqueue(int val){
    s1.push(val);
    this->Qsize++;
}

bool MyQueue::isEmpty(){

    if(s1.empty() && s2.empty()) return true;
    return false;

}


void MyQueue::Dequeue(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    if(s2.empty()){
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
    s2.pop();
    this->Qsize--;
}


int MyQueue::front(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    if(s2.empty()){
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }

    return s2.top();
}


int MyQueue::size(){
    return Qsize;
}





int main(){

    MyQueue q;
    q.Enqueue(10);
    q.Enqueue(12);
    q.Enqueue(15);

    cout<<q.front()<<endl;
    q.Dequeue();
    cout<<q.front()<<endl;
    q.Dequeue();
    cout<<q.front()<<endl;
    q.Dequeue();
    cout<<q.front()<<endl;

    return 0;
}