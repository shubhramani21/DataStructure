#include<bits/stdc++.h>
using namespace std;

void getFrequencies(vector<int> &v)
{
    vector<int> v_copy(v);

    unordered_map<int,int> mpp;

    for (int i = 0; i < v_copy.size(); i++)//O(n)
    {
        mpp[v_copy[i]]++;
    }
    
    for (auto it:mpp)
    {
        cout<<it.first<<"----->"<<it.second<<endl;
    }


    auto first=mpp.begin();
    int h_k,h_f;
    int l_k,l_f;
    if(first!=mpp.end()){
        l_k=h_k=first->first;
        l_f=h_f=first->second;
    }
    
    for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        if (it->second >= h_f) {
            h_f = it->second;
            h_k = it->first;
        }
        if (it->second <= l_f) {
            l_f = it->second;
            l_k = it->first;
        }
    }
    for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        if(it->second==h_f)
        {
            if(h_k>it->first)
            {
                h_k=it->first;
            }
        }
        if(it->second==l_f)
        {
            if(l_k>it->first)
            {
                l_k=it->first;
            }
        }
    }

    cout << "Highest Frequency: " << h_f <<" High value:"<<h_k<<endl;
    cout << "Lowest Frequency: " << l_f <<" low value:"<<l_k<<endl;


    vector<int> ans(2);
    ans[0]=h_k,
    ans[1]=l_k;

    cout<<ans[0]<<" "<<ans[1]<<endl;
    

    
}





int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    getFrequencies(arr);
    return 0;
}