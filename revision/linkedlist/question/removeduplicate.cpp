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
        cout << "Memory is free for the value " << value << endl;
    }
};

void insertathead(Node* &head, Node* &tail ,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

void insertattail(Node* &tail ,Node* &head ,int d){
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
 void insertatposition(Node* &head ,Node* &tail,int position,int d){
    if(position == 1){
        insertathead(head,tail,d);
    }

    Node* temp =head;
    int cnt=1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next = NULL){
        insertattail(tail ,head, d);
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
 }

 void removeduplicate(Node* head){

    Node* curr = head;

    while(curr != NULL){
        if((curr -> next != NULL) && (curr-> data == curr -> next -> data)){
            Node* next_next = curr -> next -> next;
            Node* nodetodelete = curr -> next;
            delete nodetodelete;
            curr -> next = next_next;
        }
        else{
            curr = curr -> next;
        }
    }

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
    Node* head = NULL;
    Node* tail = NULL;

    insertathead(head, tail , 1);
    print(head);

    insertattail(tail ,head , 2);
    print(head);

    insertattail(tail ,head , 2);
    print(head);

    insertattail(tail ,head , 2);
    print(head);

    insertattail(tail ,head , 3);
    print(head);

    removeduplicate(head);
    print(head);
    

    return 0;
}