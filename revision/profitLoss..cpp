#include<bits/stdc++.h>
using namespace std;

int profitLoss(vector<int> &arr){
    int n = arr.size();

    int mini = INT_MAX;
    int maxPro = 0;


    for (int i = 0; i < n; i++)
    {
        mini = min(mini,arr[i]);

        maxPro = max(maxPro,arr[i]-mini);
    }

    return maxPro;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int profit = profitLoss(arr);



    cout<<profit<<endl;

    return 0;
}