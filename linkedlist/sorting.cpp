#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next = NULL;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertathead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next  = NULL;
    head = temp;
}
void insertattail(Node* &tail, int d){
    Node* temp = new Node(d);
    // tail -> next = temp->next;
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node* &head, Node* &tail , int position, int d){
    if(position == 1){
        insertathead(head , d);
        if(tail == NULL){
            tail = head;
        }
        return;
    }
    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertattail(tail , d);
    }

    Node* toinserted = new  Node(d);

    toinserted -> next = temp -> next;
    temp -> next  = toinserted;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertathead(head , 10);

    insertattail(tail , 12);

    insertatposition(head , tail , 2, 30);
    print(head);

    cout << "head is " << head-> data << endl;
    cout << "tail is "<< tail -> data << endl;


    
    return 0;
}