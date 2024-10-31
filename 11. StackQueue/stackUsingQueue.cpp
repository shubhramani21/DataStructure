#include<bits/stdc++.h>
using namespace std;



class MyStack
{
private:
    queue<int> q;
public:
    MyStack(){}

    void push(int val);
    void pop();
    int top();
    int size();
};


void MyStack::push(int val){
    if(q.empty()){
        q.push(val);
        return;
    }

    int n = q.size();

    q.push(val);

    for (int i = 0; i < n; i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

void MyStack::pop(){
    q.pop();
}


int MyStack::top(){
    return q.front();
}

int MyStack::size(){
    return q.size();
}



int main(){

    MyStack st;

    st.push(10);
    cout<<st.top()<<endl;

    st.push(12);
    cout<<st.top()<<endl;

    st.push(11);
    cout<<st.top()<<endl;

    st.push(6);
    cout<<st.top()<<endl;

    st.push(8);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;


    return 0;
}