#include<bits/stdc++.h>
using namespace std;

bool checkiSetBit(int num, int i){
    return num > 0 && num & 1 << i;
}

int main(){
    int num = 13;
    int i = 1;

    cout<<checkiSetBit(num, i)<<endl;
    
    return 0;
}