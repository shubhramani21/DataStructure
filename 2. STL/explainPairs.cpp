#include<bits/stdc++.h>
using namespace std;

void expainPair()
{
    pair<int,int> p={1,2};
    cout<<p.second<<" "<<p.first<<endl;

    pair<int,pair<int,int>> q={1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<endl;

    pair <int ,int> arr[]={{1,2},{1,4},{4,7}};
    cout<<arr[1].second;
}


int main()
{
    expainPair();
    return 0;
}