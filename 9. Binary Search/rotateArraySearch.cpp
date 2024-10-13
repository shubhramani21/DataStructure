#include<bits/stdc++.h>
using namespace std;


int search(vector<int> nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(nums[mid]== target) return mid;

        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target <= nums[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(nums[mid] <= target && target<= nums[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }

    return -1;
    
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int target = 0;
    cin>>target;

    cout<<search(arr,target);
    return 0;
}