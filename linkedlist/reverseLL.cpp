#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next = NULL;

    Node(int d){
        this -> data = d;
        this -> next =NULL;
    }
};

void insert( Node* &head, int d){
    Node* node = new Node(d);
    node->next = head;
    head = node;
}

Node* reverse(Node* &head){

    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward =NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr =forward;

    }
    return prev;
}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;

    insert(head ,1);
    insert(head ,2);   
    insert(head ,3);   
    insert(head ,4);   

    print(head);
    head = reverse(head);

    return 0;
}