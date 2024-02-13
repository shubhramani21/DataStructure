#include<bits/stdc++.h>
using namespace std;


void explainPQ()
{
    priority_queue<int> pq;

    pq.push(20);
    pq.push(2);
    pq.push(10);
    pq.push(22);
    pq.push(6);
    pq.emplace(12);
    //{22,20,12,10,6,2}

    cout<<pq.top();// print 22
    pq.pop();//{20,12,10,6,2}

    cout<<pq.top()<<endl;//print 20
    // the above thing is called as maximum heap
    //Now we will look for minimum heap

    // Minimum heap

    priority_queue <int , vector<int>, greater<int>> pq;//asscending order

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    //{2,5,8,10}

    cout<<pq.top()<<endl;// print 2

}

int main()
{
    return 0;
}
