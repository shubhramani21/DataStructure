#include<bits/stdc++.h>
using namespace std;


void printArr(vector<int> &nums)
{
    for(auto it : nums) cout << it <<" ";
    cout<<endl;
}

//BRUTE FORCE APPROCH 
void rearrangeArray(vector<int>& nums)
{
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);

    for (int  i = 0; i < n; i++)
    {
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }else{
            pos.push_back(nums[i]);
        }
    }

    for (int i = 0; i < n/2; i++)
    {
        ans[2*i] = pos[i];
        ans[2*i+1] = neg[i];
    }
    
    printArr(ans);
}

//OPTIMAL APPROCH
void rearrangeArray_optimal(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans(n);
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] < 0)
        {
            ans[neg] = nums[i];
            neg += 2;
        }else
        {
            ans[pos] = nums[i];
            pos += 2;
        }
    }
    printArr(ans);
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
    rearrangeArray_optimal(nums);

    return 0;
}