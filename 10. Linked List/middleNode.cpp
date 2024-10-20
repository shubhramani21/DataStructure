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

Node<int>* getMiddleNode(Node<int>* head){
    Node<int>* slow = head;
    Node<int>* fast = head;


    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    

    return slow;
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

Node<int>* getMiddleNodeUsingN(Node<int>* head){
    int n = getLength(head);
    
    int mid = (n / 2) + 1;


    Node<int>* mover = head;
    int cnt = 0;

    while (mover != nullptr)
    {
        cnt++;
        if(cnt == mid) break;;
        mover = mover->next;
    }
    
    return mover;

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

    vector<int> arr = {2, 8, 10, 14, 16, 20};

    Node<int>* head = createArray2List(arr);

    cout<<"Linked List: ";
    printLL(head);

    cout<<"List from Middle Node: ";
    Node<int>* mid = getMiddleNodeUsingN(head);
    printLL(mid);


    return 0;
}