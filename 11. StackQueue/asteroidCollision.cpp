#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> st;

    for(auto curr : asteroids){
        if(curr > 0) st.push_back(curr);
        else{
            while (!st.empty() && st.back() > 0 && st.back() < abs(curr)) st.pop_back();

            if(!st.empty() && st.back() == abs(curr)) st.pop_back();

            else if(st.empty() || st.back() < 0) st.push_back(curr);
            
        }
    }

    return st;
}



int main(){
    vector<int> asteroids = {10,2,-5};

    vector<int> ans = asteroidCollision(asteroids);

    cout<<"[ ";
    for(auto it : ans) cout<<it<<" ";
    cout<<"]"<<endl;


    return 0;
}