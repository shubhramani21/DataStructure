#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    // Write your code here.
    vector<int> hash(n,0);
    for(int i=0;i<n;i++)
    {
        if(nums[i] >= 1 && nums[i] <= x) 
        {
            hash[nums[i] - 1]++;
        }
    }
    return hash;
}

int main()
{
    int n;
    int x;
    cin>>n;
    cin>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    vector<int> hash=countFrequency(n,x,arr);

    for(auto it: hash)
    {
        cout<<it<<" ";
    }
    return 0;
}