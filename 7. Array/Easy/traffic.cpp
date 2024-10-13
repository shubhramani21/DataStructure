#include<bits/stdc++.h>
using namespace std;
int traffic(int n, int m, vector<int> &vehicle) {
	// Write your code here.

    int max_num=0;
    int limit = m;
    int cons_one=0;
    
    for (int i = 0; i < n; i++)
    {
        
        limit=m;
        vector<int> arr(vehicle);
        max_num=0;
        for (int j = i; j < n; j++)
        {
            if(arr[j]==0 && limit>0){
                arr[j]=1;
                limit--;
            }

            if(arr[j]==1)
            {
                max_num++;
                // cout<<max_num<<" ";
            }else{
                break;
            }
        }
        cons_one=max(cons_one,max_num);
        
        // cout<<"--->"<<cons_one<<endl;
        
    }
    return cons_one;
}



int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    vector<int> vehicle;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        vehicle.push_back(val);
    }

    cout<<traffic(n,m,vehicle);

    return 0;
}