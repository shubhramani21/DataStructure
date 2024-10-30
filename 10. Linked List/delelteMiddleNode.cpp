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



Node<int>* deleteMiddle(Node<int>* head){
    Node<int>* slow = head;
    Node<int>* fast = head;

    fast = fast->next->next;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node<int>* delNode = slow->next;

    slow = slow->next->next;

    delete delNode;

    return head;

    
}





int getLength(Node<int>* head){
    Node<int>* mover = head;
    int len = 0;
    while (mover != nullptr)
    {
        len++;
        mover = mover->next;
    }
    
    return len;
}


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

    vector<int> arr = {1, 2, 3, 4, 5};

    Node<int>* head = createArray2List(arr);

    head = deleteMiddle(head);


    printLL(head);

    return 0;
}