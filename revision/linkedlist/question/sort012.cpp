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

void insertathead(Node* &head,Node* &tail, int d){
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

void insertattail(Node* &tail , Node* &head ,int d){
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
void tail(Node* tail , Node* curr){
    tail -> next = curr;
    tail = curr;
}

void inseratposition(Node* &head, Node* &tail ,int position,int d){

    if(position == 1){
        insertathead(head,tail,d);
    }

    Node* temp =head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertattail(tail,head,d);
    }

    Node* nodetoinserted = new Node(d);

    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

Node* sortlist(Node* head){
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;

    Node* curr = head;

    while(curr != NULL){
        
        int value = curr -> data;

        if(value == 0){
            tail(zerotail,curr);
        }
        else if(value == 1){
            tail(onetail,curr);
        }
        else if(value == 2){
            tail(twotail,curr);
        }
        curr = curr -> next;
    }

    if(onehead->next != NULL){
        zerotail -> next = onehead -> next;
    }
    else{
        zerotail -> next = twohead -> next;
    }
    onetail -> next = twohead -> next;
    twotail -> next = NULL;

    head = zerohead -> next;

    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
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

    insertathead(head,tail,1);
    print(head);

    insertattail(tail ,head, 0);
    print(head);

    insertattail(tail ,head, 1);
    print(head);

    insertattail(tail ,head, 2);
    print(head);

    insertattail(tail ,head, 2);
    print(head);

    sortlist(head);
    print(head);
    
    return 0;
}