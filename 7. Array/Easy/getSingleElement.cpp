#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.	
    unordered_map<int,int> mpp;
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it : mpp)
    {
        if(it.second==1) return it.first;
    }

    return -1;
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
    cout<<getSingleElement(arr)<<endl;
    return 0;
}