#include<bits/stdc++.h>
using namespace std;



bool sortele(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.second;
    }
    return a.second > b.second;
}

vector<int> Sortelementsbyfreq(vector<int> arr, int n){
    vector<int> ans;
    unordered_map<int,int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    vector<pair<int,int>> vec;
    for(auto it : mpp){
        vec.push_back({it.first,it.second});
    }

    sort(vec.begin(),vec.end(),sortele);

    for (int i = 0; i < vec.size(); i++)
    {
        while (vec[i].second > 0)
        {
            ans.push_back(vec[i].first);
            // cout<<vec[i].first<<" ";
            vec[i].second--;
        }
        
    }
    return ans;
}

int main(){
    int n = 0;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    Sortelementsbyfreq(arr, n);
    return 0;
}