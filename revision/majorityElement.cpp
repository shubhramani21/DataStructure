#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr){

    int n = arr.size();
    int cnt = 0;
    int el;

    for (int i = 0; i < n; i++)
    {
        if(cnt == 0){
            el = arr[i];
            cnt = 1;
        }else if(el == arr[i]) cnt++;
        else cnt--;
    }
    
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == el) cnt1++;
    }

    if(cnt1 > (n/2)) return el;

    return -1; 
    

}

void printArr(vector<int>arr){
    for (auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
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


    // printArr(arr);
    return 0;
}
