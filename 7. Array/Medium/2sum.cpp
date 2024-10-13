#include<bits/stdc++.h>
using namespace std;



vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        vector<int> key;

        pair<int,int> arr[n];

        for (int i = 0; i < n; i++)
        {
            pair<int,int> temp;

            temp.first = nums[i];
            temp.second = i;

            arr[i]=temp;
        }

        int left = 0;
        int right = n-1;

        sort(arr,arr + n,[](pair<int,int> a,pair<int,int> b){return a.first < b.first;});


        while (left < right)
        {
            int sum = arr[left].first + arr[right].first;

            if(sum==target)
            {
                key.push_back(arr[left].second);
                key.push_back(arr[right].second);
                break;
            }

            if(sum < target) left++;
            else right--;

        }

        return key;
    }




int main()
{
    int n;
    cin>>n;

    int target;
    cin>>target;

    vector<int> nums(n);

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    vector<int> ans= twoSum(nums,target);

    for(auto it : ans)
    {
        cout<<it<<" ";
    }

    return 0;
}