#include<bits/stdc++.h>
using namespace std;


vector < int > sortedArray(vector <int> a, vector < int > b) {

    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    vector<int> temp;

    while (i<n && j<m)
    {
        if(a[i]<=b[j]){

            if(temp.size()==0 || temp.back()!=a[i])
                temp.push_back(a[i]);
            i++;  
        }else{
            if(temp.size()==0 || temp.back()!=b[j])
                temp.push_back(b[j]);
            j++;
        }
    }
    while (i<n)
    {
        if(temp.size()==0 || temp.back()!=a[i])
            temp.push_back(a[i]);
        i++; 
    }
    
    while (j<m)
    {
        if(temp.size()==0 || temp.back()!=b[j])
            temp.push_back(b[j]);
        j++;
    }

    return temp;
    
}


int main()
{
    int n,m;
    vector<int> a;
    vector<int> b;

    cin>>n;
    cin>>m;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        a.push_back(val);
    }
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        b.push_back(val);
    }

    vector<int> ans;

    ans=sortedArray(a,b);

    for(auto i : ans) cout<<i<<" ";

    return 0;
}


