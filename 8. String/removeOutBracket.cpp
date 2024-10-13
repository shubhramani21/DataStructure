#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    stack<char> st;
    int c = 0;
    bool isOpen = false;
    string ans = "";
    
    
    while (c < s.length()) {
        if (s[c] == '(' && !isOpen) {
            isOpen = true;  
        } else if (s[c] == '(') {
            ans.push_back('(');  
            st.push('(');
        } else if (s[c] == ')') {
            if (st.empty()) {
                isOpen = false;  
            } else {
                st.pop();  
                ans.push_back(')');
            }
        }
        c++;
    }
    
    return ans; 
}



int main(){
    string s = "(()())(())(()(()))";
    string ans = removeOuterParentheses(s);

    cout << ans;

    return 0;
}