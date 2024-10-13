#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> arr, int k){
    map<int,int> mpp;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int remaining_num = k - num;

        if(mpp.find(remaining_num) != mpp.end()){
            return true;
        }
        mpp[num] = i;
    }

    return false;
}


int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if(twoSum(arr,k)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
