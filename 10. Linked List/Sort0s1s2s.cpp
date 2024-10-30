#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;
    static int countNode;
public:
    Node(int data, Node* next):data(data), next(next){
        countNode++;
    }

    Node(int data):data(data),next(nullptr){
        countNode++;
    }

    Node(): data(-1),next(nullptr){
        countNode++;
    }
};

int Node::countNode = 0;


Node* sortColors(Node* head){

    if(head == nullptr || head->next == nullptr) return head;


    Node* zeroHead = new Node();
    Node* oneHead = new Node();
    Node* twoHead = new Node();

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;


    Node* temp = head;
    while (temp != nullptr)
    {   
        if(temp->data == 0){
            zero->next = temp;
            zero = zero->next;
        }
        if(temp->data == 1){
            one->next = temp;
            one = one->next;
        }
        if(temp->data == 2){
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    

    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = nullptr;

    Node* newHead = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}


Node* convertArr2LL(vector<int> &arr){

    int n = arr.size();

    if(n == 0) return nullptr;

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


void printLL(Node* head){
    Node* mover = head;
    while (mover != nullptr)
    {
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;   
}


int main(){

    vector<int> arr = {0,1,0,2,1,2,0};
    
    Node* head = convertArr2LL(arr);

    printLL(head);

    head = sortColors(head);

    printLL(head);

    return 0;
}


