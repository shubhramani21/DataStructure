#include<bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n) {
    // break condition
    if(n==1) return 1;

    // reccursion condtion
    return n+sumFirstN(n-1);

}



int main()
{
    int n;
    cin>>n;

    auto ans=sumFirstN(n);
    cout<<ans<<endl;


}