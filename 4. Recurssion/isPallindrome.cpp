#include<bits/stdc++.h>
using namespace std;

bool isPallindromeLoop(const string &str)
{
    int n=str.length();
    string reverse_str=str;
    int i=0,j=n-1;
    while (i<j)
    {
        swap(reverse_str[i],reverse_str[j]);
        i++;
        j--;
    }
    if (reverse_str==str) return true;
    return false;
}


string Reverse(string str, int i, int j)
{
    if(i<j)
    {
        swap(str[i],str[j]);
        string rev=Reverse(str,i+1,j-1);
        return rev;
    }
    return str;
}

bool isPallindrome(string& str) {
    // Write your code here.
    string rev=Reverse(str,0,str.length()-1);
    if(rev==str) return true;
    return false;
}


int main()
{
    string str;
    cin>>str;
    
    cout<<isPallindrome(str);
    return 0;
}