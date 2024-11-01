#include<bits/stdc++.h>
using namespace std;


void Merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while ((left <= mid) && (right <= high))
    {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) 
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    
}

int countPair(vector<int> &arr, int low, int mid, int high){

    int right =  mid + 1;

    int cnt = 0;

    for (int i = low; i <= mid; i++)
    {
        while (arr[i] > 2 * arr[right] && right <= high) right++;
        cnt += (right - (mid + 1));
    }

    return cnt;
    

}

int mergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    if(low < high){

        int mid = (low + high) / 2;

        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);

        cnt += countPair(arr, low, mid, high);

        Merge(arr, low, mid, high);
    }
    return cnt;
}


int reversePair(vector<int> &nums){
    int n = nums.size();

    int ans = mergeSort(nums, 0, n - 1);

    return ans;
}

int main(){
    vector<int> arr = {40, 25, 19, 12, 9, 6, 2};

    int count  = reversePair(arr);

    cout<<count<<endl;

    return 0;
}