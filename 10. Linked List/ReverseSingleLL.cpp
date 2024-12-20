#include<bits/stdc++.h>
using namespace std;


template <typename T>
class Node {
public:
    T data;
    static int nodeCount;  
    Node* next;

public:
    Node(T data, Node* next) : data(data), next(next) {
        nodeCount++;
    }

    Node(T data) : data(data), next(nullptr) {
        nodeCount++;
    }

    ~Node() {
        nodeCount--;
    }
};


template <typename T>
int Node<T>::nodeCount = 0;



Node<int>* createArray2List(vector<int> &arr){
    int n = arr.size();
    Node<int>* head = new Node<int>(arr[0]);

    Node<int>* mover = head;

    for (int i = 1; i < n; i++)
    {
        Node<int>* temp = new Node<int>(arr[i]);
        mover->next = temp;

        mover = mover->next;
    }

    return head;
}




Node<int>* reverseLL(Node<int>* head){

    Node<int>* curr = head;
    Node<int>* front = head;
    Node<int>* prev = nullptr;


    while (curr != nullptr)
    {
        front = front->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    
    return prev;
}


Node<int>* reverseLLRecursive(Node<int>* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }


    Node<int>* tailHead = reverseLLRecursive(head->next);

    Node<int>* front = head->next;

    front->next = head;
    head->next =nullptr;

    return tailHead;
}



Node<int>* reverseLLStack(Node<int>* head);



void printLL(Node<int>* head){
    if(head == nullptr) return;

    Node<int>* mover = head;
    while (mover != nullptr)
    {
        cout<<mover->data<<" ";
        mover = mover->next;
    }

    cout<<endl;
    
}




int main(){

    vector<int> arr = {2, 8, 10, 14, 16};

    Node<int>* head = createArray2List(arr);

    cout<<"Before reverse: ";
    printLL(head);

    head = reverseLLRecursive(head);

    cout<<"After reverse: ";
    printLL(head);


    return 0;
}