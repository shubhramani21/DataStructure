#include<bits/stdc++.h>
using namespace std;



class MinStack{
public:
    int mini;
    stack<int> st;
    MinStack(){
        mini = INT_MAX;
    }

    void push(int val);
    void pop();
    int top();
    int getMin();
};

void MinStack::push(int val){
    if(st.empty()){
        st.push(val);
        mini = val;
    }else{
        if(mini >= val){
            int newVal = 2 * val - mini;
            st.push(newVal);
            mini = val;
        }else{
            st.push(val);
        }
    }
}

void MinStack::pop(){
    if(st.empty())return;

    int x = st.top();
    st.pop();

    if(x < mini){
        mini = 2 * mini - x;
    }

}


int MinStack::top(){
    if(st.empty()) return;

    int x = st.top();

    if(mini < x) return x;
    
    return mini;
}

int MinStack::getMin(){
    return mini;
}   

