#include<bits/stdc++.h>
using namespace std;


int removeLastSetBit(int num){
    if(num > 0){
        return (num & num - 1);
    }
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
    int num = 84;
    cout<<"n Bits: "<<convertIntToBin(num)<<endl;
    cout<<"n - 1 Bits: "<<convertIntToBin(num - 1)<<endl;


    cout<<removeLastSetBit(num)<<endl;

    cout<<"Ans In bits: "<<convertIntToBin(removeLastSetBit(num));


    return 0;
}