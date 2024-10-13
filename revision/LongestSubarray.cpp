#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> arr, int k){
    int n = arr.size();

    int sum = 0;

    int maxLen = 0;


    map<int,int> prefixSum;
    int rem = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if(sum == k){
            maxLen = max(maxLen,i+1);
        }

        rem = sum - k;

        //if key(remaining) in found in the map
        if(prefixSum.find(rem) != prefixSum.end()){
            int len = i - prefixSum[rem];
            maxLen = max(maxLen,len);
        }


        if(prefixSum.find(sum) == prefixSum.end()){
            prefixSum[sum] = i;
        }
    }
    
    return maxLen; 
}



int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int longest = longestSubarray(arr,k);

    cout<<longest<<endl;
    return 0;
}
