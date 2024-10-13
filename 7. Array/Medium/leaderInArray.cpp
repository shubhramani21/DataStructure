#include<bits/stdc++.h>
using namespace std;


void printArray(vector<int> &nums)
{
    for(auto it : nums) cout<<it<<" ";
    cout<<endl;
}


// BRUTE FORCE APPROACH
vector<int> leaderArray(vector<int> &nums)
{
    int n = nums.size();
    
    vector<int> leaders;
    
    leaders.push_back(nums[n-1]);

    for (int i = n-2; i >= 0; i--)
    {
        bool isLeader = true;
        for (int j = i+1; j < n; j++)
        {
            if(nums[i] < nums[j])
            {
                isLeader = false;
                break;
            }
        }
        if(isLeader) leaders.push_back(nums[i]);
    }
    
    return leaders;
}

// OPTIAML APPROACH
vector<int> leaderArray_optimal(vector<int> &nums)
{
    int n = nums.size();

    int maxi = nums[n-1];
    vector<int> leaders;
    leaders.push_back(nums[n-1]);

    for (int i = n-2; i >= 0; i--)
    {
        if(maxi < nums[i])
        {
            maxi = nums[i];
            leaders.push_back(nums[i]);
        }
    }
    
    return leaders;
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

    vector<int> leaders = leaderArray_optimal(nums);
    reverse(leaders.begin(),leaders.end());
    printArray(leaders);

    return 0;
}