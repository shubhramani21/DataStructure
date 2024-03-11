#include<bits/stdc++.h>
using namespace std;



void moveZeros(int n, vector<int> &arr) {
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }

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
    moveZeros(n,arr);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}