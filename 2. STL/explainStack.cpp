#include<bits/stdc++.h>
using namespace std;
void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}
void explainStack()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}

int main()
{
    explainStack();
    return 0;
}


//output
// The elements of the stack are:
// 5
// 4
// 3
// 2
// 1
// The size of the stack: 5
// The top element of the queue: 5
// Pop the top element: 
// 4
// 3
// 2
// 1
