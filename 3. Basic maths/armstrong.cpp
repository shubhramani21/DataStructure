#include<bits/stdc++.h>
using namespace std;

bool Armstrong(int x)
{
    int n=x;

    int count=(int)(log10(n)+1);
    int sum=0;
    while (n>0)
    {
        int lastNum=n%10;
        sum=sum+pow(lastNum,count);
        n=n/10;
    }
    
    if(sum==x)return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<Armstrong(n);
    return 0;
}