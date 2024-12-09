#include<bits/stdc++.h>
using namespace std;


const bool comp(vector<int> &v1, vector<int> &v2){
    return v1[1] < v2[1];
}

void printArr(vector<vector<int>> arr){
    for(auto a : arr){
        cout<<"[ ";
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<"]";
    }
    cout<<endl;
}


int main(){
    vector<vector<int>> arr = {{2, 3}, {1, 2}, {3, 4}};

    printArr(arr);

    sort(arr.begin(), arr.end(), comp);

    printArr(arr);


    return 0;
}