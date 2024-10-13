#include<bits/stdc++.h>
using namespace std;


bool isSorted(vector<int> &arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main()
{

    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    if(isSorted(arr,n))
        cout<<"The array is Sorted!"<<endl;
    else    
        cout<<"The array iS NOT Sorted!"<<endl;
    
    return 0;
}