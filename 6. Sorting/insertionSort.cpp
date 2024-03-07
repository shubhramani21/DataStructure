#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n=arr.size();
    for (int i = 0; i <= n-1; i++)
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
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int low = 0, high = i - 1;

        // Binary search to find the correct position for key
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(arr[mid] > key)
                high = mid - 1;
            else
                low = mid + 1;
        }

        // Shift elements greater than key to the right
        for(int j = i - 1; j >= low; j--)
            arr[j + 1] = arr[j];

        // Insert key at correct position
        arr[low] = key;
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
    new_insertionSort(arr);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}