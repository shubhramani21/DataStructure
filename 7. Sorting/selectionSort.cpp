#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n=arr.size();
    for (int i = 0; i <= n-2; i++)
    {
        int min=i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
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

    selectionSort(arr);

    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}