#include<bits/stdc++.h>
using namespace std;


void explainList()
{
    list<int> ls;
    ls.push_back(23);
    ls.emplace_back(21);

    ls.push_front(22);
    ls.emplace_front(20);

    for(auto value: ls){
        cout<<value<<" ";
    }


    // rest function are same as vector
    // begin, end, rbegin, rend , clear, insert, size , swap
}

int main()
{

    explainList();//{20 ,22 ,23 ,21 }
    return 0;
}