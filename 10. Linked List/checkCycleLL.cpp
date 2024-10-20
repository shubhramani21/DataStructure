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


bool isCycle(Node<int>* head){

    Node<int>* slow = head;
    Node<int>* fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    
    return false;
}


Node<int>* getCycleStart(Node<int>* head){

    Node<int>* slow = head;
    Node<int>* fast = head;


    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            slow = head;
            while (slow != fast)
            {
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    
    return nullptr;
}


Node<int>* getMid(Node<int>* head){

    Node<int>* slow = head;
    Node<int>* fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

Node<int>* getTail(Node<int>* head){
    if(head == nullptr) return nullptr;

    Node<int>* tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    
    return tail;
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

    vector<int> arr = {2, 8, 10, 14, 16, 20};

    Node<int>* head = createArray2List(arr);


    Node<int>* tail = getTail(head);
    Node<int>* mid = getMid(head);
    tail->next = mid;

    if(isCycle(head)){
        cout<<"Cycle exist!!"<<endl;
        Node<int>* startCycle = getCycleStart(head);

        Node<int>* mover = startCycle;
        
        do{
            cout<<mover->data<<" ";
            mover = mover->next;
        }while(mover != startCycle);
        
        cout<<startCycle->data<<endl;
    }
    else cout<<"Cycle does not exist!!"<<endl;
    

    return 0;
}