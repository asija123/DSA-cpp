#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

void inserathead(Node* &head , Node* &tail ,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head= temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
};

void inserattail(Node* &tail, Node* &head ,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
}

void insertatposition(Node* &head ,Node* &tail , int position,int d){
    if(position == 1){
        inserathead(head,tail,d);
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        inserattail(tail,head,d);
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head= NULL;
    Node* tail = NULL;

    inserathead(head,tail,1);
    print(head);

    inserattail(tail , head, 2);
    print(head);

    inserattail(tail , head, 4);
    print(head);

    inserattail(tail , head, 5);
    print(head);

    inserattail(tail , head, 6);
    print(head);
    
    return 0;
}