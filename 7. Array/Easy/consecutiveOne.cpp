#include<bits/stdc++.h>
using namespace std;


int consecutiveOnes(vector<int> &arr)
{
    int con_ones=0;
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1) count++;
        else{
            con_ones=max(con_ones,count);
            count=0;
        }
    }
    con_ones=max(con_ones,count);
    return con_ones;
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
    cout<<consecutiveOnes(arr)<<endl;
    return 0;
}