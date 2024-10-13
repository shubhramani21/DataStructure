#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }

    arr[n-1]=temp;
}



int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    rotateArray(arr,n);

    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}