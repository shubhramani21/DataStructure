#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;

    static int countNode;

public:
    Node(int data, Node* next, Node* back):data(data),next(next),back(back){
        countNode++;
    }

    Node(int data, Node* next):data(data),next(next),back(nullptr){
        countNode++;
    }

    Node(int data):data(data),next(nullptr),back(nullptr){
        countNode++;
    }

};

int Node::countNode = 0;


Node* createArr2LL(vector<int> &arr){


    int n = arr.size();

    if(n == 0){
        return nullptr;
    }

    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;
        mover = temp;
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


Node* reverseLL(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* front = head;

    while (curr != nullptr)
    {
        front = front->next;
        curr->next = curr->back;
        curr->back = front;
        prev = curr;
        curr = front;
    }
    
    return prev;
}




int main(){
    

    vector<int> arr = {1, 3, 5, 6};
    Node* head = createArr2LL(arr);

    cout<<"Before: ";
    printLL(head);


    head = reverseLL(head);

    cout<<"After: ";
    printLL(head);


    return 0;
}