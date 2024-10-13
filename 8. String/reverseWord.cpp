#include<bits/stdc++.h>
using namespace std;


string removeExtraSpace(string s) {
    int i = 0;
    int n = s.length();
    int j = n - 1;

    while (i < n && s[i] == ' ') i++;
    
    while (j >= 0 && s[j] == ' ') j--;

    
    return s.substr(i, j - i + 1); 
}


int main(){
    string s = "hello         world    ";
    string str = removeExtraSpace(s);
    string temp = "";
    stringstream ss(str);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++) {
        temp += words[i];
        if (i != words.size() - 1) {
            temp += " ";
        }
    }
    
    cout<<temp;
    return 0;
}