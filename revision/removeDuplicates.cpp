#include<bits/stdc++.h>
using namespace std;


void printArr(vector<int> arr){
    for(auto it : arr)
        cout<<it<<" ";  
    cout<<endl;
}

// brute force method 
// vector<int> removeDuplicates(vector<int> arr)
// {
//     set<int> s;

//     for (auto it: arr)
//         s.insert(it);
    
//     int k = s.size();
//     int j = 0;

//     vector<int> no_dup(k);

//     for (auto x : s)
//     {
//         no_dup[j++] = x;
//     }
    
//     // for(auto x : no_duplicate)

//     return no_dup;
// }


vector<int> removeDuplicates(vector<int> arr){
    int n = arr.size();
    
    int j = 0;

    for (int  i = 1; i < n; i++)
    {
        if(arr[i-1] != arr[i]){
            arr[++j] = arr[i];
        }
    }
    vector<int> no_dup(j+1);

    for (int i = 0; i < j+1; i++)
    {
        no_dup[i] = arr[i];
    }
    return no_dup;
    
}



int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    printArr(arr);

    vector<int> no_duplicate_arr = removeDuplicates(arr);

    printArr(no_duplicate_arr);

    return 0;
}
