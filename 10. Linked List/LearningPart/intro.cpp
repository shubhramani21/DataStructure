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

// Static member initialization outside the class
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


Node<int>* removeHead(Node<int>* head){
    if(head == NULL) return head;

    Node<int>* temp = head;
    head = head->next;

    delete temp;
    return head;
}


int getLenList(Node<int>* head){
    int count = 0;
    Node<int>* mover = head;

    while (mover != nullptr)
    {
        count++;
        mover = mover->next;
    }
    return count;
}


void showList(Node<int>* head){
    Node<int>* mover = head;


    while (mover != nullptr)
    {
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;
}


bool isPresent(Node<int>* head, int val){

    Node<int>* mover = head;

    while (mover != nullptr)
    {
        if(mover->data == val) return true;
        mover = mover->next;
    }
    
    return false;
}

Node<int>* reomveTail(Node<int>* head){
    if(head == nullptr || head->next == nullptr) return nullptr;

    Node<int>* mover = head;

    while (mover->next->next != nullptr)
    {
        mover = mover->next;
    }

    delete(mover->next);
    mover->next = nullptr;

    return head;

}


Node<int>* deleteK(Node<int>* head, int k){
    if(head == nullptr) return head;


    if(k == 1){
        Node<int>* temp = head;
        head = head->next;
        delete head;
        return head;
    }

    int count = 0;

    Node<int>* mover = head;
    Node<int>* prev = nullptr;

    while (mover != nullptr)
    {
        count++;

        if(count == k){
            prev->next = mover->next;
            delete mover;
            break;
        }
        prev = mover;
        mover = mover->next;
    }


    return head;


}


Node<int>* deleteVal(Node<int>* head, int val){
    Node<int>* mover = head;

    if(head == nullptr) return head;

    if(head->data == val){
        head = head->next;  
        delete mover;
        return head;
    }

    Node<int>* prev;

    while (mover != nullptr){
        
        if(mover->data == val){
            prev->next = mover->next;
            delete mover;

            break;
        }
        prev = mover;
        mover = mover->next;
    }

    return head;

    
}

int main(){
    
    vector<int> arr = {100,23,4,5,6,90};

    Node<int>* head = createArray2List(arr);

    showList(head);
    int val = 10;
    cout<<"Number of nodes: "<<Node<int>::nodeCount<<endl;
    cout<<"Number of nodes: "<<getLenList(head)<<endl;

    if(isPresent(head,val)) cout<<val<<" is PRESENT in the list"<<endl;
    else cout<<val<<" is NOT PRESENT in the list!"<<endl;


    // head = deleteK(head, 3);
    head = deleteVal(head, 4);
    showList(head);


    return 0;

}