#include<bits/stdc++.h>
using namespace std;




vector<int> unionArray(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> uni;

    while (i < n && j < m)
    {
        if(arr1[i] <= arr2[j]){
            if(uni.size() == 0 || uni.back() != arr1[i]){
                uni.push_back(arr1[i]);
            }
            i++;
        }else{
            if(uni.size() == 0 || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    

    while (i < n)
    {
        if(uni.size() == 0 || uni.back() != arr1[i]){
            uni.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if(uni.size() == 0 || uni.back() != arr2[j]){
            uni.push_back(arr2[j]);
        }
        j++;
    }
    
    return uni;

}


void printArr(vector<int> arr){
    for(auto it: arr)
        cout<<it<<" ";
    cout<<endl;
}


int main()
{
    int n,m;

    cin>>n;
    cin>>m;

    vector<int> arr1(n);
    vector<int> arr2(m);


    for (int i = 0; i < n; i++)
        cin>>arr1[i];

    for (int i = 0; i < m; i++)
        cin>>arr2[i];

    vector<int> uni = unionArray(arr1,arr2);

    printArr(uni);


    return 0;
}