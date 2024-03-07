#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=n-1;i>=1;i--)
    {
        bool didSwap=false;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didSwap=true;
            }
        }
        if(!didSwap) break;
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    bubbleSort(arr);

    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}