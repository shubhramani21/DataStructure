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

int main(){
    
    vector<int> arr = {100,23,4,5,6,90};

    Node<int>* head = createArray2List(arr);

    showList(head);
    int val = 10;
    cout<<"Number of nodes: "<<Node<int>::nodeCount<<endl;
    cout<<"Number of nodes: "<<getLenList(head)<<endl;

    if(isPresent(head,val)) cout<<val<<" is PRESENT in the list"<<endl;
    else cout<<val<<" is NOT PRESENT in the list!"<<endl;


    head = removeHead(head);

    cout<<head->data<<endl;


    return 0;

}