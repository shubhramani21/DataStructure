#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    if(n > 0){
        return (n & (n-1)) ? false : true;
    }
    return false;
}

string convertIntToBin(int num){
    string bits = "";

    while (num != 0)
    {
        if(num % 2 != 0) bits += '1';
        else bits += '0';

        num  = num / 2;
    }

    reverse(bits.begin(), bits.end());

    return bits;
    
}


int main(){

    int num = 101;
    cout<<"n Bits: "<<convertIntToBin(num)<<endl;
    cout<<"n-1 Bits: "<<convertIntToBin(num-1)<<endl;


    if(isPowerOfTwo(num)) cout<<num<<" is power of two"<<endl;
    else cout<<num<<" is not power of two"<<endl;


    return 0;
}
