#include<bits/stdc++.h>
using namespace std;

int missingNumberXOR(vector<int> arr1,int n){
    int ans;

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n-1; i++)
    {
        xor2 = xor2 ^ arr1[i];
        xor1 = xor1 ^ (i+1);
    }

    xor1 = xor1 ^ n;

    ans =  xor1 ^ xor2;

    return ans;
    
}


int missingNumberSum(vector<int> arr1, int n){
    int normalSum = (n*(n+1))/2;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr1[i];
    }
    return normalSum - sum;

}

void printArr(vector<int> arr){
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{   
    int n;
    cin>>n;

    vector<int> arr1(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr1[i];
    }
    
    printArr(arr1);
    
    int missNo = missingNumberSum(arr1,n);
    cout<<missNo<<endl;

    return 0;
}