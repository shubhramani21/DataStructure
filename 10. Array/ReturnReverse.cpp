#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int> ans(nums);
    int i=0;
    int j=n-1;
    while (i<j)
    {
        swap(ans[i],ans[j]);
        i++;
        j--;
    }

    return ans;
}

int main()
{

    return 0;
}
