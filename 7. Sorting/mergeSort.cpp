#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;

    while (left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left<= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    
    for (int i = low; i <= high; i++)
    {
        arr[i]=temp[i-low];
    }
    
}

void mergeSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}



int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    mergeSort(arr,0,n-1);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}