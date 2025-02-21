#include<bits/stdc++.h>
using namespace std;



// brute force method 
int bruteForce__stringKDisChar(string s, int k){

    int maxLen = 0; // storing maxlen of the substing
    map<char, int> mpp; // for understanding the distinct element
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        mpp.clear(); // clearing the map with every new substring generated

        for (int j = i; j < n; j++)
        {
            mpp[s[j]]++; // updating the hashmap

            if(mpp.size() <= k){
                maxLen = max(maxLen, j - i + 1); // calculating maximum length for te given substring
            }
            else break; // breaking the inner for loop if the character lenght of the substring gets increased by given value k
        }
    }

    return maxLen;
}

int stringKdisChar(string s, int k){
    int maxLen = 0;
    map<char, int> mpp;

    int r = 0, l = 0;

    int n = s.size();;

    while (r < n)
    {
        mpp[s[r]]++;

        if(mpp.size() > k){
            mpp[s[l]]--;
            if(mpp[s[l]] == 0) mpp.erase(mpp[s[l]]);
            l++;        
        }

        if(mpp.size() <= k){
            maxLen = max(maxLen, r - l + 1);
        }
        r++;
    }

    return maxLen;   

   
}

int main(){
    
    int k;
    string s;

    cin>>k;
    cin >> s;

    cout<<"Brute Force : "<<bruteForce__stringKDisChar(s, k)<<endl;    

    cout<<"Optimal Method: "<< stringKdisChar(s, k)<<endl;
    return 0;
}