#include<bits/stdc++.h>
using namespace std;

void printDivisor_Method1(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
    cout<<endl;
}
void printDivisor_Method2(int n)
{
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if( (n/i) != i) ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;
}



int main()
{
    printDivisor_Method1(36);
    printDivisor_Method2(36);
    return 0;\

}