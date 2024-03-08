#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i <= high-1) 
    {
      i++;
    }
    while (arr[j] > pivot && j >= low+1) 
    {
      j--;
    }
    if(i<j) swap(arr[i], arr[j]);
  }
  
  swap(arr[low], arr[j]);

  return j;
}


void quickSort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int pIndex=Partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
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

    quickSort(arr,0,n-1);

    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}