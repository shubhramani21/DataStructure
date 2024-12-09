#include<bits/stdc++.h>
using namespace std;

int setiBit(int num, int i){
    if(num > 0) return (num | 1 << i);
    return -1;
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
    int num = 13;
    int i = 1;
    string bits = convertIntToBin(num);
    string i_bits = convertIntToBin(1 << i);

    cout<<"Bin: "<<bits<<endl;
    cout<<"i in Bin: "<<i_bits<<endl;

    cout<<setiBit(num, i)<<endl;

    cout<<"Final Ans Bits: "<<convertIntToBin(setiBit(num, i));
    
    return 0;
}