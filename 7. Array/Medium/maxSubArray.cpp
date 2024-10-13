#include<bits/stdc++.h>
using namespace std;


void printArr(vector<int> &nums)
{
    for(auto it : nums) cout << it <<" ";
    cout<<endl;
}

int maxSubArray_brute(vector<int> &nums)
{
    int n = nums.size();
    int sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subCount = 0;
            for (int k = i; k <= j; k++)
            {
                subCount += nums[k];
            }
            if(sum < subCount) sum = subCount;
        } 
    }

    return sum;
    
}

int maxSubArray_better(vector<int> &nums)
{
    int sum = INT_MIN;
    int n = nums.size();


    for (int i = 0; i < n; i++)
    {
        int subCount = 0;
        for (int j = i; j < n; j++)
        {
            subCount += nums[j];

            if(sum < subCount) sum = subCount;
        }
    }

    return sum;
    
}


// kadane's algorithm
int maxSubArray_Optimal(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0;

    for (auto it : nums)
    {
        sum += it;
        maxi = sum > maxi ? sum : maxi;
        sum  = sum < 0 ? 0 : sum;
    }
    
    return maxi;
}


int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    printArr(nums);
    
    cout << maxSubArray_Optimal(nums);
    return 0;
}