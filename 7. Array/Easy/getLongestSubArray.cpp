#include<bits/stdc++.h>
using namespace std;


int getLongestSubArray(vector<int> &arr,long long k)
{
    int n=arr.size();
    int len=0;
    for (int i = 0; i < n; i++)
    {
        long long s=0;
        for (int j = i; j < n; j++)
        {
            s+=arr[j];

            if(s==k) len=max(len,j-i+1);   
        }
        
    }
    
    return len;
}

int getLongestSubArray_Hash(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) { //Checking the presence of rem in preSumMap
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {//Checking the presence of the sum in preSumMap
        //if not present update the Hash Map
            preSumMap[sum] = i;
        }
    }   

    return maxLen;
}

int getLongestSubArray_TwoPointer(vector<int> &a, long long k)
{
    int sum=0;
    int maxLen=0;
    int n= a.size();
    int j=0;
   for(int i=0;i<n;i++)
   {
        
        sum+=a[i];
        while (sum>k && j<=i)
        {
            sum-=a[j];
            j++;
        }if(sum==k)
        {
            maxLen=max(maxLen,i-j+1);
        }
   }

   return maxLen;
}

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    // cout<<getLongestSubArray(arr,k);
    cout<<getLongestSubArray_TwoPointer(arr,k);
    return 0;
}