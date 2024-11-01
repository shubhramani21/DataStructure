#include<bits/stdc++.h>
using namespace std;



int Merge(vector<int> &arr, int low, int mid, int high){
    int cnt = 0;
    int left = low;
    int right = mid + 1;
    vector<int>temp;

    while ((left <= mid) && (right <= high))
    {
        if(arr[left] > arr[right]){
            int leftEle = mid - left + 1;
            cnt += leftEle;
            temp.push_back(arr[right]);
            right++;
        }else{
            temp.push_back(arr[left]);
            left++;
        }
    }

    while(left <= mid){
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
    return cnt;
}


int MergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    if(low < high){

        int mid = (low + high) / 2 ;

        cnt += MergeSort(arr, low, mid);
        cnt += MergeSort(arr, mid + 1, high);
        cnt += Merge(arr, low, mid, high);

    }
    return cnt;
}


int countInversion(vector<int> &arr){
    return MergeSort(arr, 0, arr.size() - 1);
}


void printArr(vector<int> arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {5, 3, 2, 4, 1};
    
    printArr(arr);

    int count = countInversion(arr);

    printArr(arr);

    cout<<count<<endl;

    return 0;
}