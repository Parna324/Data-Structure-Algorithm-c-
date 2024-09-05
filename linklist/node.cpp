#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }


};
int main() {
    Node *head = new Node(2);
    Node *parna = new Node(12,head);
    cout << parna->data << endl;
    cout << parna->next->data;
    return 0;
}