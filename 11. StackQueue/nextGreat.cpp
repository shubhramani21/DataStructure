#include<bits/stdc++.h>
using namespace std;


vector<int> nextGreat(vector<int> arr){

    vector<int> ls;
    stack<int> st;


    int n = arr.size();

    for (int i = n - 1; i >= 0; i--)
    {

        while (arr[i] >= st.top() && !st.empty())
        {
            st.pop();
        }

        if(st.empty()){
            ls.push_back(-1);
            st.push(arr[i]);
            continue;
        }

        ls.push_back(st.top());
        st.push(arr[i]);
    }

    reverse(ls.begin(),ls.end());

    return ls;
}


void printVec(vector<int> arr){

    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}



int main(){
    vector<int> arr = {4,12,5,3,1,2,5,3,1,4,6};

    vector<int> nGreat = nextGreat(arr);

    printVec(nGreat);



    return 0;
}