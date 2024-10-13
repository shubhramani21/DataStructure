#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    int loc=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==num){
            loc=i;
            break;
        }
    }
    return loc;
}


int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;

    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int loc=linearSearch(n,num,arr);

    cout<<loc<<endl;

    
    return 0;
}