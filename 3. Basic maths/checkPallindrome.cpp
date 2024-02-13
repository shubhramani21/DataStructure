#include<bits/stdc++.h>
using namespace std;


bool isPallindrome(int x)
{
    int n=x;
    int revNum=0;
    while (n>0)
    {
        int lastDigit=n%10;
        revNum=(int)((revNum)*10+lastDigit);
        n=n/10;
    }
    if(revNum==x) return true;
    return false;
    
}


int main()
{
    cout<<isPallindrome(1221);
    return 0;
}
