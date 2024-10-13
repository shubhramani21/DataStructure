#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int miss=-1;

    for(int i=1;i<=N;i++)
    {
        int flag=0;
        for(int j=0;j<a.size();j++)
        {
            if(a[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            miss=i;
            break;
        }
    }

    return miss;

}
int missingNumber_hash(vector<int>&a, int N) {
    // Write your code here.

    vector<int> hash(N+1,0);
    
    for (int i = 0; i < N-1; i++)
    {
        hash[a[i]]++;
    }
    

    for(int i=1;i<=N;i++)
    {
        if(hash[i]==0) return i;
    }
    return -1;

}

int main()
{

    int n;
    vector<int> a;
    for(int i=0;i<n-1;i++)
    {
        int val;
        cin>>val;

        a.push_back(val);
    }

    int miss=missingNumber_hash(a,n);

    cout<<miss<<endl;
    return 0;
}