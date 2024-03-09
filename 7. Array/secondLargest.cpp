#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int low, int mid , int high)
{
    int left=low, right =mid+1;

    vector<int>temp;

    while (left<=mid && right <=high)
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
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}


//brute force method
int secondLargest(vector<int> &arr, int n)
{
    mergeSort(arr, 0,n-1);

    int largest=arr[n-1];
    int sLargest=-1;


    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!= largest)
        {
            sLargest=arr[i];
            break;
        }
    }
    return sLargest;
}


//better method
int secondlargest(vector<int> &arr,int n)
{
    int largest=arr[0];

    for(auto it: arr)
    {
        if(it>largest) largest=it;
    }

    int sLargest=-1;

    for(auto it: arr)
    {
        if(it>sLargest && it!=largest) sLargest=it;
    }
    return sLargest;
}


//optimized method
int secondLargest_optimized(vector<int> &arr, int n)
{
    int largest=arr[0], sLargest=-1;

    for(auto it:arr)
    {
        //largest=54 sLargest=43 it=50
        if(it>largest) 
        {
            sLargest=largest;  
            largest=it;
        }else if(it>sLargest)
        {
            sLargest=it;
        }
    }

    return sLargest;
}


int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    cout<<"Brute force Method"<<endl;
    cout<<"Largest Element: "<<secondLargest(arr,n)<<endl;

    cout<<endl;

    cout<<"Better Method"<<endl;
    cout<<"Largest Element: "<<secondlargest(arr,n)<<endl;

    cout<<endl;

    cout<<"Optimize method"<<endl;
    cout<<"Largest Element: "<<secondLargest_optimized(arr,n)<<endl;




    return 0;
}