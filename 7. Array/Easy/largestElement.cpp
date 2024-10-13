#include<bits/stdc++.h>
using namespace std;


int Partition(vector<int> &arr, int low , int high)
{
    int i=low,j=high;

    int pivot=arr[low];

    while (i<j)
    {
        while (i<=high-1 && arr[i]<=pivot) 
        {
            i++;
        }
        while (j>=low+1 && arr[j]>pivot)
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int pIndex=Partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}


//Brute force Method
int largestElement_method1(vector<int> &arr, int n)//O(n logn)
{

    quickSort(arr,0,n-1);
    int ans=arr[n-1];
    return ans;
}


//Optimize method
int largestElement_method2(vector<int> &arr, int n)//O(n)
{
    int largest=arr[0];
    for(auto it:arr)
    {
        if(it>largest) largest=it;   
    }

    return largest;
}




int main()
{
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    cout<<"Optimize method"<<endl;
    cout<<"Largest Element: "<<largestElement_method2(arr,n)<<endl;
    cout<<endl;
    cout<<"Brute force Method"<<endl;
    cout<<"Largest Element: "<<largestElement_method1(arr,n)<<endl;

    // for(auto it: arr)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    return 0;
}