#include<bits/stdc++.h>
using namespace std;

void explainDequeue()
{
    deque<int> dq;
    dq.push_back(20);
    dq.emplace_back(21);//{20,21}
    dq.push_front(19);
    dq.emplace_front(18);//{18,19,20,21}
    //{18,19,20,21}
    dq.pop_back();//{18,19,20}
    dq.pop_front();//{19,20}

    int frontElement = dq.front();

    // Print the front element
    cout << "Front element: " << frontElement <<endl;

    int backElement = dq.back();

    // Print the last element
    cout << "Last element: " << backElement <<endl;
}

int main()
{
    explainDequeue();
    return 0;
}