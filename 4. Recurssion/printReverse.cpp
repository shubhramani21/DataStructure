#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

vector<int> printNos(int x) {
    if (x == 0) {
        return v;
    }
    v.emplace_back(x);
    printNos(x - 1);
    return v; // Return the vector after the recursion
}

int main() {
    int n = 5;
    vector<int> result = printNos(n);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
