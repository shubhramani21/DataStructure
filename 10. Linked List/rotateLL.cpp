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


Node* rotateRight(Node* head, int k) {


    if(k == 0) return head;//if there is no rotation

    if(head == nullptr || head->next == nullptr) return head;
        //if there is only one node or there is no linkedList

    int len = getLen(head); // finding the length

    if(k % len == 0) return head;//checking that if the roation that we made is same as the original linked list or not

    int noOfRotate = k % len;//finding number of rotations
        
    int rem = len - noOfRotate;

    Node* lastNode = head;

    while(rem > 1){
        lastNode = lastNode->next;
        rem--;
    }
    Node* tail = lastNode->next;
    Node* newHead = tail;

    while(tail->next != nullptr){
        tail = tail->next;
    }

    lastNode->next = nullptr;
    tail->next = head;

    return newHead;

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
    vector<int> arr = {1, 2, 3, 4, 5};

    Node* head = createArray2List(arr);

    cout<<"Before ";
    printLL(head);

    head = rotateRight(head,2);

    cout<<"After ";
    printLL(head);

    return 0;
}