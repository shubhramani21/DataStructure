#include<bits/stdc++.h>
using namespace std;

// first thing that comes to the mind
int countNoOfSetBits(int n){
    int cnt = 0;

    while (n != 0)
    {
        cnt += n & 1;  
        n = n >> 1;
    }
    return cnt;
}

// in built Function
int inBuilt_countNoOfSetBits(int num){
    return __builtin_popcount(num);
}

// optimal way
int optimal_countNoOfSetBits(int n){
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n = n & n - 1;
    }

    return cnt;
    
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

    int num = 63;
    cout<<"n Bits: "<<convertIntToBin(num)<<endl;
    cout<<"n-1 Bits: "<<convertIntToBin(num-1)<<endl;

    cout<<countNoOfSetBits(num)<<endl;
    cout<<inBuilt_countNoOfSetBits(num)<<endl;
    cout<<optimal_countNoOfSetBits(num)<<endl;

    return 0;
}
