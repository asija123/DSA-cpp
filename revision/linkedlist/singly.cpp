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
    ~Node(){
        int value = this -> data;

        if(this -> next = NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for the value " << value <<endl;
    }

};

void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertattail(Node* &tail , int d){
    Node* temp =  new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertatposition(Node* &head , Node* &tail , int position ,int d){

    if(position == 1){
        insertathead(head ,d);
        return;
    }

    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next  == NULL){
        insertattail(tail,d);
        return;
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

void deletenode(int position,Node* &head ,Node* &tail){
    
    if(position == 1){
       Node* temp = head;
       head = head -> next;

       temp -> next = NULL;
       delete temp; 
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;

         if(prev -> next == NULL){
            tail = prev;
        }

        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    // insertathead(head,12);
    // print(head);

    // insertathead(head,15);
    // print(head);

    insertattail(tail , 12);
    print(head);

    insertattail(tail , 15);
    print(head);

    insertatposition(head,tail,3,14);
    print(head);

    insertatposition(head,tail,1,5);
    print(head);

    insertatposition(head,tail,6,20);
    print(head);

    cout << "head is " << head -> data << endl;
    cout << "tail is " << tail -> data << endl;


    deletenode(4,head,tail);
    print(head);
    cout << "head is " << head -> data << endl;
    cout << "tail is " << tail -> data << endl;
    
    return 0;
}