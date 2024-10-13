#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr){
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
}


void reverse(vector<int> &arr,int start,int end){
    int i = start;
    int j = end-1;
    while (i < j)
    {
        swap(arr[i++],arr[j--]);
    }
}   

void rotateArrayLeft(vector<int> &arr,int k){
    int n = arr.size();

    reverse(arr,0,k);
    reverse(arr,k,n);
    reverse(arr,0,n);
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
    cout<<"Before: ";
    printArr(arr);
    cout<<"After: ";
    rotateArrayLeft(arr,4);
    printArr(arr);
    return 0;
}