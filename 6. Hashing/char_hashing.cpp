#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    int n;
    cin>>n;
    int hash[26]={0};

    for(int i=0;i<s.size();i++)
    {
        if('a'<=s[i] && s[i]<='z') hash[s[i]-'a']++;
        if('A'<=s[i] && s[i]<='Z') hash[s[i]-'A']++;
    }

    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if('a'<=ch && ch<='z') cout<<hash[ch-'a']<<endl;
        else if('A'<=ch && ch<='Z') cout<<hash[ch-'A']<<endl;  
    }

    return 0;
}