#include<bits/stdc++.h>
using namespace std;

// hashmap Better Apporoch
int getSingleElementMap(vector<int> &arr){
    map<int,int> dict;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        dict[arr[i]]++;
    }


    for(auto it: dict){
        if(it.second == 1){
            return it.first;
        }
    }

    return -1;
}


// Xor Optimal Apporoch

int getSingleElementXor(vector<int> &arr){
    int n = arr.size();

    int single = 0;

    for (int i = 0; i < n; i++)
    {
        single = single ^ arr[i];
    }
    return single;
}


int main(){
    
    int n;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int single = getSingleElementXor(arr);

    cout<<single<<endl;


    return 0;
}