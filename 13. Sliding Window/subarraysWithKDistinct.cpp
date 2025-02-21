#include<bits/stdc++.h>
using namespace std;

int subarryWithAtleastKDistinct(vector<int> &nums, int k){
    int l = 0, r = 0;
    int cnt = 0;
    map<int, int> mpp;

    int n = nums.size();

    while(r < n){
        mpp[nums[r]]++;
        
        while(mpp.size() > k){
            mpp[nums[l]]--;

            if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
            l++;
        }
        cnt = cnt + (r - l + 1);
        r++;
    }
    return cnt;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {

    return subarryWithAtleastKDistinct(nums, k) - subarryWithAtleastKDistinct(nums, k - 1);

}


int main(){

    int k;
    cin >> k;
     
    int n;
    cin >> n;
    vector<int> nums(n);


    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout<<subarraysWithKDistinct(nums, k)<<endl;
    
    return 0;
}