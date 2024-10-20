#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Node{
public:
    T data;
    Node<T>* next;
    Node<T>* back;
    static int nodeCount;
public:
    Node(T data, Node* next = nullptr, Node* back = nullptr): data(data),next(next),back(back){
        nodeCount++;
    }

    ~Node(){
        nodeCount--;
    }
};


template<typename T>
int Node<T>::nodeCount = 0;


Node<int>* createArr2DLL(vector<int> &arr){
    int n = arr.size();

    if(n == 0) return nullptr;

    Node<int>* head = new Node<int>(arr[0]);
    Node<int>* mover = head;

    for (int i = 1; i < n; i++)
    {
        Node<int>* temp = new Node<int>(arr[i]);
        mover->next = temp;
        temp->back = mover;
        mover = mover->next;   
    }

    return head;
}

Node<int>* deleteHead(Node<int>* head){
    if(head == nullptr) return nullptr;

    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node<int>* temp = head;

    head = head->next;
    head->back = nullptr;

    temp->next = nullptr;

    delete temp;

    return head;
}

Node<int>* deleteTail(Node<int>* head){
    if(head == nullptr) return nullptr;

    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node<int>* tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->back->next = nullptr;
    tail->back = nullptr;

    delete tail;

    return head;
}

Node<int>* deletePosition(Node<int>* head,int pos){
    if(head == nullptr) return nullptr;

    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node<int>* temp = head;
    int cnt = 0;

    while (temp != nullptr)
    {
        cnt++;
        if(cnt == pos) break;

        temp = temp->next;
    }

    if(temp == nullptr) return head;

    Node<int>* prev = temp->back;
    Node<int>* front = temp->next;


    if(prev == nullptr){
        return deleteHead(head);
    }else if(front == nullptr){
        return deleteTail(head);    
    }else{
        prev->next = front;
        front->back = prev;

        delete temp;
    }

    return head;

}

void deleteNode(Node<int>* node){

    Node<int>* prev = node->back;
    Node<int>* front = node->next;

    if(front == nullptr){
        prev->next = nullptr;
        node->back = nullptr;
        delete node;
        return;
    }

    prev->next = front;
    front->back = prev;

    node->next = node->back = nullptr;

    delete node;
}


Node<int>* insertHead(Node<int>* head, int val){

    if(head == nullptr) {
        return new Node<int>(val);
    }

    Node<int>* temp  = new Node<int>(val);

    temp->next = head;
    head->back = temp;
    head = temp;


    return head;
}

Node<int>* insertTail(Node<int>* head, int val){

    if(head == nullptr){
        return new Node<int>(val);
    }


    Node<int>* tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node<int>* temp = new Node<int>(val, nullptr, tail);

    tail->next = temp;

    return head;
}

Node<int>* insertPosition(Node<int>* head,int val, int pos){

    if(pos == 1){
        if(head == nullptr){
            return new Node<int>(val);
        }else{
           return insertHead(head, val);
        }
    }

    int cnt = 0;

    Node<int>* mover = head;

    while (mover != nullptr)
    {
        cnt++;
        if(cnt == pos) break;
        mover = mover->next;
    }


    if(mover == nullptr && cnt < pos) return head;

    if(mover == nullptr && cnt == pos) return insertTail(head, val);
    

    Node<int>* prev = mover->back;

    Node<int>* temp = new Node<int>(val,mover,prev);

    prev->next = temp;
    mover->back = temp;

    return head;
}

void insertNode(Node<int>* node,int val){

    if(node == nullptr) return;

    Node<int>* temp = new Node<int>(val,node,node->back);

    Node<int>* prev = node->back;


    if(prev != nullptr){
        prev->next = temp;
    }

    node->back = temp;
}


void printLL(Node<int>* head){
    Node<int>* mover = head;

    while (mover != nullptr)
    {
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;
}




int main(){

    vector<int> arr = {100,12,34,56,87};

    Node<int>* head = createArr2DLL(arr);
    
    printLL(head);

    return 0;
}