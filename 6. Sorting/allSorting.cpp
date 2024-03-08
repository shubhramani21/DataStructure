#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=n-1;i>=1;i--)
    {
        bool didSwap=false;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
                didSwap=true;
            }
        }
        if(!didSwap) break;
    }
}

void insertionSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=1;i<=n-2;i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
        
    }
}

void new_insertionSort(vector<int> &arr)
{
    int n=arr.size();

    for(int i=1;i<=n-1;i++)
    {
        int key=arr[i];
        int low=0, high=i-1;

        while (low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]>key)
            {
                high=mid-1;
            }else{
                low=mid=1;
            }
        }

        for(int j=i-1;j>=low;j--)
        {
            arr[j+1]=arr[j];
        }

        arr[low]=key;
        
    }
}
void selectionSort(vector<int> &arr)
{
    int n=arr.size();

    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    
}


void Merge(vector<int> &arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while (left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        
    }
    
}

void mergeSort(vector<int> &arr,int low,int high)
{
    if(low<=high)
    {
        int mid=(high+low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}



int main()
{
    return 0;
}