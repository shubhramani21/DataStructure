#include<bits/stdc++.h>
using namespace std;

void countDigit(long long x)
{
    long long n=x;
    int count=0;
    int lastDigit=0;
    while (n>0)
    {
        lastDigit=n%10;
        cout<<"Last digit= "<<lastDigit<<endl;
        count++;
        n=n/10;
    }
    cout<<"Count number: "<<count<<endl;
}

int main()
{
    countDigit(13209);
    return 0;
}