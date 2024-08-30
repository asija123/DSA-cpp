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

void insertathead(Node* &head ,Node* &tail ,int d){
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

void insertatposition(Node* &head , Node* &tail , int position , int d){
    if(position == 1){
        insertathead(head ,tail , d);
        return;
    }

    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertattail(tail ,head, d);
        return;
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

// by recursion
void rev(Node* &head , Node* curr, Node* prev){

    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    rev(head, forward , curr);
    curr -> next = prev;
}

Node* reverse(Node*head){

    Node* prev = NULL;
    Node* curr = head;
    rev(head , curr, prev);
    return head;


// by looping
    // if(head == NULL || head -> next == NULL){
    //     return head;
    // }

    // Node* prev = NULL;
    // Node* curr = head;
    // Node* forward = NULL;

    // while(curr != NULL){
    //     forward = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
    // }
    // return prev;
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
    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;

    insertathead(head , tail , 2);
    print(head);

    insertattail(tail ,head, 3);
    print(head);

    insertattail(tail ,head,4);
    print(head);
    
   insertatposition(head ,tail , 1,1);
   print(head);

   head = reverse(head);
   print(head);
    return 0;
}