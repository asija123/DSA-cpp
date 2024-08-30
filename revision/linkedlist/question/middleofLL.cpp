#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this  -> next = NULL;
    }
};

void insertathead(Node* &head, Node* &tail, int d){

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
void insertattail(Node* &head , Node* &tail ,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        tail =  temp;
    }
}

void insertatposition(Node* &head , Node* &tail, int position, int d){
    if(position == 1){
        insertathead(head ,tail ,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertattail(head ,tail,d);
        return;
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

Node* middleelement(Node* head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    if(head -> next -> next == NULL){
        return head -> next;
    }

    Node* slow = head;
    Node* fast  = head -> next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
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
    Node* head = NULL;
    Node* tail = NULL;

    insertathead(head,tail ,1);

    insertattail(tail ,head, 2);
    
    insertattail(tail ,head, 3);

    insertattail(tail ,head, 4);

    insertattail(tail ,head, 5);


    print(head);



    Node* middle =  middleelement(head);
    cout << middle ->data << endl;
    return 0;
}