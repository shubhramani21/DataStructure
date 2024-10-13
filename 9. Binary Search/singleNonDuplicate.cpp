#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &arr){
    int n = arr.size();


    int low = 0;
    int high = n - 1;   

    while (low <=  high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]) return arr[mid];

        if(arr[mid] == arr[mid + 1]){
            int diff = high - mid  + 1;
            if(diff % 2 == 0){
                high = mid - 1;
            }else{
                low = mid;
            }

        }else{ // arr[mid] == arr[mid-1]
            int diff = mid - low + 1;
            if(diff % 2 == 0){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
    }
    
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<singleNonDuplicate(arr);

    return 0;
}