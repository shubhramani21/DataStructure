#include<bits/stdc++.h>
using namespace std;


void printArray(vector<int> &nums)
{
    for(auto it : nums) cout<<it<<" ";
    cout<<endl;
}

bool linearSearch(vector<int> nums,int key)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == key) return true;
    }
    return false;
}

//BRUTE FORCE APPROACH
int longestSuccessiveElement(vector<int> &nums)
{
    int n = nums.size();

    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        int count = 1;

        while (linearSearch(nums,x))
        {
            x++;
            count++;
        }

        longest = max(longest,count);
    }
    
}

// BETTER APPROACH
int loongestSuccessiveElement_better(vector<int> &nums)
{
    int n = nums.size();

    if(n == 0) return 0;    

    int lastSmaller = INT_MIN;
    int count = 0;
    int longest = 1;

    sort(nums.begin(),nums.end());

    for (int i = 0; i < n; i++)
    {
        if(nums[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = nums[i];
        }
        else if(nums[i] != lastSmaller)
        {
            count ++;
            lastSmaller = nums[i];
        }
        longest = max(longest,count);
    }
    
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
    printArray(nums);


    return 0;
}