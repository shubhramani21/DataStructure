#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &nums)
{
    for(auto it : nums) cout << it <<" ";
    cout<<endl;
}

//BRUTE FORCE APPROACH 
/* Calculate all the permuation of a given array and check the next permutation*/

// BETTER APPROACH
/* using in build STL Library */
// void nextPermutation(vector<int> &nums)
// {
//     next_permutation(nums.begin(),nums.end());
// }


//OPTIMAL APPROACH
void nextPermutation(vector<int> &nums)
{
    int n = nums.size();

    int index = -1;

    //finding the break point
    for (int  i = n-2; i >= 0 ; i--)
    {
        if(nums[i] < nums[i+1]){
            index = i;  
            break;
        }
    }
    // if no break point found reverse the array
    if(index == -1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(nums[index] < nums[i])
        {
            swap(nums[index],nums[i]);
            break;
        }
    }

    reverse(nums.begin() + index + 1, nums.end());
    

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
    nextPermutation(nums);
    printArr(nums);

    return 0;
}