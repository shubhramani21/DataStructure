#include<bits/stdc++.h>
using namespace std;


int GCD_method1(int n1,int n2)
{
    int limit=min(n1,n2);
    int gcd=1;

    for(int i=1;i<=limit;i++)
    {
        if(n1%i==0  && n2%i==0) gcd=i;
    }
    return gcd;
    // the time complexity is O(min(n1,n2))
}
int GCD_method2(int n1,int n2)
{
    int limit=min(n1,n2);
    int gcd=1;

    for(int i=limit;i>=1;i--)
    {
        if(n1%i==0  && n2%i==0) {
            gcd=i;
            break;
        }
    }
    return gcd;
    // the worst case time complexity is O(min(n1,n2))
    // best case will be O(1)

}
int GCD_EuclideanAlgorithm(int n1,int n2)
{
    int a=n1;
    int b=n2;

    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}

int main()
{
    cout<<GCD_method1(7,4949)<<endl;
    cout<<GCD_method2(7,4949)<<endl;
    cout<<GCD_EuclideanAlgorithm(7,4949)<<endl;
    return 0;
}