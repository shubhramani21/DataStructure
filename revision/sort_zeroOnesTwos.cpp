#include<bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &arr){
    int mid = 0;
    int low = 0;

    int n = arr.size();

    int high = n - 1;

    while (mid <= high)
    {
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


void printArr(vector<int>arr){
    for (auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    sortArr(arr);

    printArr(arr);
    return 0;
}
