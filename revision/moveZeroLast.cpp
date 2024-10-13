#include<bits/stdc++.h>
using namespace std;


void moveZeroLast(vector<int> &arr){
   
    int j = 0;
    while (arr[j] != 0) j++;

    for (int i = j+1; i < arr.size(); i++)
    {
        if(arr[i] != 0){
            swap(arr[i],arr[j++]);
        }
    }
    
}
// complexity : 2n + 4 +2+2 = 2n + 8



void printArr(vector<int> arr){
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    printArr(arr);
    moveZeroLast(arr);
    printArr(arr);
    return 0;
}