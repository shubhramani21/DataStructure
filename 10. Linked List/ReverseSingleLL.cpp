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









int main(){
    return 0;
}