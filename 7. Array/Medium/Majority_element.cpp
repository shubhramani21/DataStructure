#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size()/2;

    unordered_map<int,int> mpp;

    for(auto i : nums) mpp[i]++;

    for(auto it : mpp)
    {
        if (it.second > n) return it.first;
    }

}

int majorityElement_noSpace(vector<int> &nums)
{  
    int current_element = 0;
    int count = 0;
    int n = nums.size();

    for(auto element : nums)
    {   
        if(count == 0) current_element = element;

        if(current_element == element) count++;
        else count--;
    }   

    
    int val_count = 0;
    for(auto it : nums)
    {
        if(current_element == it) val_count++;
    }

    if(val_count > (n/2)) return current_element;
    
    return -1;
}






int main()
{   
    int n;
    cin>>n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }

    cout<<majorityElement_noSpace(nums)<<endl;    

    return 0;
}