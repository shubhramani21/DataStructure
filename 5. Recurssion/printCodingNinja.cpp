#include<bits/stdc++.h>
using namespace std;

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> CodingNinja(n,"Coding Ninja");
	return CodingNinja;
}


int main()
{
    vector<string> print;
    print=printNTimes(4);
    for(auto it: print) cout<<it<<" ";

    return 0;
}