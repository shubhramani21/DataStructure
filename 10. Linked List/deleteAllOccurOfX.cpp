#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;
    Node(): val(0),next(nullptr), prev(nullptr){}
    Node(int val): val(val),next(nullptr), prev(nullptr){}
    Node(int val, Node* next): val(val),next(next), prev(nullptr){}
    Node(int val, Node* next, Node* prev): val(val),next(next), prev(prev){}
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

Node* deleteAllOccurOfX(Node* head, int val) {
    Node* mover = head;

    while (mover != nullptr)
    {
        if(mover->val == val){
            
            Node* back  = mover->prev;
            Node* front = mover->next;

            if(back != nullptr){
                back->next = front;
            }else{
                head = front;
            }

            if(front != nullptr){
                front->prev = back;
            }
            Node* delNode = mover;
            mover = mover->next;
            delete delNode;
        }else{
            mover = mover->next;
        }

    }
    return head;
}



Node* createArray2List(vector<int> &arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);

    Node* mover = head;

    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;

        mover = mover->next;
    }

    return head;
}



int main(){
    vector<int> arr = {2, 2, 10, 8, 4, 2, 5, 2};

    Node* head = createArray2List(arr);

    printLL (head);

    head = deleteAllOccurOfX(head, 2);

    printLL(head);

    return 0;
}