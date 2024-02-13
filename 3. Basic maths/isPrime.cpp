#include<bits/stdc++.h>
using namespace std;

bool isPrime_Method1(int n)
{
    int count=0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0) count++;
    }
    if(count==2)return true;
    return false;
}

bool isPrime_Method2(int n)
{
    int count=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i) count++;
        }
    }
    if(count==2)return true;
    return false;

}

int main()
{
    if(isPrime_Method1(17)) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    if(isPrime_Method2(17)) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}
