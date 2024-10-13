#include<bits/stdc++.h>
using namespace std;

// optimal solution
// dutch flag algorithm


void dutchFlag(vector<int> &arr)
{   
    int n = arr.size();

    int low = 0;
    int mid = 0;
    int high = n-1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }

        else if (arr[mid] == 1) mid++;

        else if (arr[mid] == 2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
}



void printarr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}


int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    printarr(arr);
    
    dutchFlag(arr);

    printarr(arr);

    return 0;
}