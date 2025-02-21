#include<bits/stdc++.h>
using namespace std;

int maximumSum(vector<int> &nums) {
    
}


void printArray(vector<int> arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    
    int n;
    cin>>n;
    
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    
    printArray(nums);



    return 0; 
}