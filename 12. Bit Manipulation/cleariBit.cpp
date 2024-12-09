#include<bits/stdc++.h>
using namespace std;


int cleariBit(int num, int i){
    if(num > 0){
        return num & ~(1<<i);
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
    int num = 13;
    int i = 2;
    cout<<"Bits: "<<convertIntToBin(num)<<endl;
    cout<<"i in Bits: "<<convertIntToBin(1<<i)<<endl;


    cout<<cleariBit(num, i)<<endl;

    cout<<"Ans In bits: "<<convertIntToBin(cleariBit(num, i));


    return 0;
}