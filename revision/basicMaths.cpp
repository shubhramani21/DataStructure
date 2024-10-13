#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n) {
    int ans = 0;

    while (n > 0) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n /= 10;
    }

    return ans;
}


int findGcd(int num1,int num2){
    if(num2==0){
        return num1;
    }else{
        return findGcd(num2,num1%num2);
    }
}


// n = 153
bool isArmstrong(int n) {
    int original = n;  // Store the original number
    int count = log10(n) + 1;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        int p = 1;
        for (int i = 0; i < count; i++) {
            p *= digit;
        }
        sum += p;
        n /= 10;
    }

    return sum == original;  // Compare the sum with the original number
}


vector<int> getDivisors(int n){
        int sqrtN = sqrt(n);
        vector<int> divisors;


        for (int i = 1; i <= sqrtN; i++)
        {
            if(n % i == 0){
                divisors.push_back(i);

                if(i != n/i){
                    divisors.push_back((int)n/i);
                }
            }   
        } 

        return divisors;
}

bool isPrime(int n){
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            count++;

            if(i != n/i){
                count++;
            }
        }
    }
    return count == 2;
}


void printVector(vector<int> arr){
    for (auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    
    int n = 24;

    if(isPrime(n)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;

    return 0;
}