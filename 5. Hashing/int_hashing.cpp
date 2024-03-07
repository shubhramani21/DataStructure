#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int hash[12]={0};
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int val;
        cin>>val;
        cout<<hash[val]<<endl;
    }
    
}