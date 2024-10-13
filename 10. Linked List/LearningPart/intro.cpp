#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    static int nodeCount;  
    Node* next;

public:
    Node(int data, Node* next) : data(data), next(next) {
        nodeCount++;
    }

    Node(int data) : data(data), next(nullptr) {
        nodeCount++;
    }
    
    ~Node() {
        nodeCount--;
    }
};

// Static member initialization outside the class
int Node::nodeCount = 0;


int main(){
    
    int arr[4] = {1,2,3,4};


    Node *head = new Node(arr[0]);


    Node *y = head;

    cout<<y<<endl;
    cout<<head<<endl;
    return 0;

}