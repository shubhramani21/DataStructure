#include<bits/stdc++.h>
using namespace std;


int firstOcc(vector<int> arr, int target){
    int n = arr.size();

    int low = 0;
    int high = n-1;
    int first = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        
        if(arr[mid] == target){
            first = mid;
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return first;
    
}

int lastOcc(vector<int> arr,int target){
    int n = arr.size();

    int low = 0;
    int high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        }else if(arr[mid] < target){
            high = mid - 1;
        }else{
            low = mid + 1;  
        }
    }

    return last;
}

pair<int,int> firstAndLastPosition(vector<int> arr,int target){
    int first = firstOcc(arr,target); // O(log n)
    if(first == -1) return make_pair(-1,-1);

    int last = lastOcc(arr,target); // O(log n)
    
    return make_pair(first,last);
}


int cnt(vector<int> arr,int target){
    pair<int,int> ans = firstAndLastPosition(arr,target);
    if(ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}



int main(){
    vector<int> arr = {2,4,6,8,8,8,11,13};
    int n = 8, target= 8;
    
    int ans = cnt(arr,target);

    cout << "The number of occurrences is: " <<ans<< "\n";
    return 0;

    return 0;
}