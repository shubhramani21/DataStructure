#include<bits/stdc++.h>
using namespace std;

//brute force method 
void leftRotateArray(vector<int> &arr, int n,int d)
{
    int temp[n];

    d=d%n;
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<arr.size();i++)
    {
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=d+1;i<arr.size();i++)
    {
        arr[i]=temp[j];
        j++;
    }
}
void rightRotateArray(vector<int> &arr, int n,int d)
{
    vector<int> temp;

    d=d%n;

    for(int i=d+1;i<n;i++)
    {
        temp.push_back(arr[i]);
    }
    int j=0;
    for(int i=d;i>=0;i--)
    {
        arr[n-1-j]=arr[i];
        j++;
    }
    for(int i=0;i<d;i++)
    {
        arr[i]=temp[i];
    }
}


//optimize method

void reverse_arr(vector<int> &arr,int start,int end)
{
    while (start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void leftRotateArray_optimize(vector<int> &arr, int n,int d)
{
    d=d%n;
    reverse_arr(arr,0,d-1);
    reverse_arr(arr,d,n-1);
    reverse_arr(arr,0,n-1);
}

void rightRotateArray_optimize(vector<int> &arr, int n,int d)
{
    d=d%n;
    reverse_arr(arr,0,n-d-1);
    reverse_arr(arr,n-d,n-1);
    reverse_arr(arr,0,n-1);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int d;
    cin>>d;

    vector<int> arr1(arr);


    //left Rotate
    leftRotateArray_optimize(arr,n,d);
    cout<<"Left Rotate:"<<endl;
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //right Rotate
    cout<<"Right Rotate:"<<endl;
    rightRotateArray_optimize(arr1,n,d);
    for(auto it: arr1)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}