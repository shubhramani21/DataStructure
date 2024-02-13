#include<bits/stdc++.h>
using namespace std;

int reveresNumber(long long x)
{
    long long n=x;
        long long revNum=0;
        int lastNum=0;
        int neg=0;
        if(n<0) 
        {
            n=n*(-1);
            neg=1;
        }
        while (n>0)
        {
            lastNum=n%10;

            if((revNum>INT_MAX/10)|| (revNum<INT_MIN/10)){
                return 0;
            }

            revNum=(int)((revNum*10)+lastNum);
            n=n/10;
        }

        if(neg) revNum=revNum*(-1);
        return revNum;
}

int main()
{
    cout<<"Reverse number: "<<reveresNumber(1534236469);
    return 0;
}