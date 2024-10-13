#include<bits/stdc++.h>
using namespace std;


// BRUTE FORCE APPROACH
int maxProfit(vector<int> &prices)
{
    int n = prices.size();

    int maxPro = INT_MIN;


    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(prices[i] > prices[j]) continue;
            int profit;
            profit = prices[j] - prices[i];
            maxPro = max(maxPro , profit);
        }
        
    }

    return maxPro;
    
}

//OPTIMAL APPROACH
int maxProfit_optimal(vector<int> &prices)
{
    int n = prices.size();

    int maxPro = 0;
    int mini = prices[0];

    for (int i = 0; i < n; i++)
    {
        if(prices[mini] > prices[i]) mini = i;

        int profit = prices[i] - prices[mini];
        maxPro = max(maxPro,profit);
    }
    return maxPro;
}

void printArr(vector<int> &nums)
{
    for(auto it : nums) cout << it <<" ";
    cout<<endl;
}



int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    printArr(nums);

    cout<<maxProfit_optimal(nums);  

    return 0;
}