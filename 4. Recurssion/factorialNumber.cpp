#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    //break condition
    if(n==1) return 1;
    //recurrence condtition
    return n*factorial(n-1);
}



vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> ans;
    int number = 1;

    while(factorial(number)<=n){
        ans.push_back(factorial(number));
        number++;
    }

    return ans;

}

int main()
{
    int n;
    cin>>n;

    for (auto i:factorialNumbers(n))
    {
        cout<<i<<" ";
    }


    return 0;
}