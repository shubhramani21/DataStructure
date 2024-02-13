#include<bits/stdc++.h>
using namespace std;


void explainMaps()
{
    //key value pairs
    // map<int , int> mpp;
    // map<int , pair<int,int>> mpp;
    // map< pair<int,int>, int > mpp;
    map<int, int> mpp;

    // Inserting key-value pairs using operator[]
    mpp[1] = 2;  // key=1, value=2

    // Inserting key-value pairs using emplace
    mpp.emplace(3, 1);  // key=3, value=1

    mpp.insert({2,3});

    map<pair<int,int>, int> mpp1;
    mpp1[{1,2}]=3;

    for(auto it: mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];

    auto it =mpp.find(1);
    cout<<it->second;
}


void explainMultimaps()
{
    //everything same as map, only it can store multiple key
    //only mpp[key] cannot be used here
}

void explainUnorderedmap()
{
    //same as map but it does not store the value in sorted way and does not have duplicates
    
}