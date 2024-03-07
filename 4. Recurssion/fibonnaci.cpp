#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    static vector<int> table;
    if (n <= 1) {
        return n;
    }
    else if (n >= table.size()) {
        table.resize(n+1);
    }

    if (!table[n]){

        table[n] = fib(n-1) + fib(n-2);
    }
    return table[n];
}
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans;
    
    for(int i=0;i<n;i++)
    {
        ans.push_back(fib(i));
    }

    return ans;
}


int main()
{
    int n;
    cin >> n;
    vector<int> fibo = generateFibonacciNumbers(n);
    for (auto i : fibo)
        cout << i << " ";
    return 0;
}