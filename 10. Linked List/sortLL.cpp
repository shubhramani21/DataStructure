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

    Node(): data(0),next(nullptr){
        countNode++;
    }
};

int Node::countNode = 0;


Node* getMiddleNode(Node* head){
    Node* fast = head;
    Node* slow = head;
    fast = fast->next;


    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
    
}



Node* Merge2SortedLL(Node* left, Node* right){

    Node* preHead = new Node();

    Node* temp = preHead;

    while (left != nullptr && right != nullptr)
    {
        if(left->data <= right->data){
            temp->next = left;
            left = left->next;
        }else{
            temp->next = right;
            right = right->next;
        }

        temp = temp->next;
    }

    if(left != nullptr){
        temp->next = left;
    }else{
        temp->next = right;
    }

    return preHead->next;
    

}

Node* SortLL(Node* head){

    if(head == nullptr || head->next == nullptr) return head;

    Node* left = head;
    Node* middle = getMiddleNode(head);
    Node* right = middle->next;
    middle->next = nullptr;

    left = SortLL(left);
    right = SortLL(right);
    
    return Merge2SortedLL(left,right);
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

    vector<int> arr = {2,3,6,1,4};
    
    Node* head = convertArr2LL(arr);
    printLL(head);

    head = SortLL(head);

    printLL(head);

    return 0;
}


