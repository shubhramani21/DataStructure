#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(): val(0),next(nullptr){}
    Node(int val): val(val),next(nullptr){}
    Node(int val, Node* next): val(val),next(next){}
};




int getLen(Node* head){
    Node* mover = head;
    int cnt = 0;
    while(mover != nullptr){
        cnt++;
        mover = mover->next;
    }

   return cnt;
}



void printLL(Node* head){
    if(head == nullptr) return;

    Node* mover = head;
    while (mover != nullptr)
    {
        cout<<mover->val<<" ";
        mover = mover->next;
    }

    cout<<endl;
    
}

Node* deleteAllOccurOfX(Node* head, int val){
    

}



Node* createArray2List(vector<int> &arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);

    Node* mover = head;

    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;

        mover = mover->next;
    }

    return head;
}



int main(){
    vector<int> arr = {2, 2, 10, 8, 4, 2, 5, 2};

    Node* head = createArray2List(arr);

    printLL(head);

    return 0;
}