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

void insertathead(Node* &head , Node* &tail , int d){
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
 void inserattail(Node* &head ,Node* &tail ,int d){
    if(head == NULL){
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

 void insertatposition(Node* &head , Node* &tail ,int position ,int d){
    if(position == 1){
        insertathead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next != NULL){
        inserattail(head,tail,d);
        return;
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
 }


Node* reversekgorup(Node* &head ,int k){
      if(head == NULL){
        return NULL;
      }

      Node* prev = NULL;
      Node* curr = head;
      Node* next = NULL;
      int count =0;

      while(curr != NULL && count <k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
      }
      head -> next = reversekgorup(curr , k);

      return prev;
}

void print(Node* &head){
    Node* temp = head;

    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertathead(head,tail,1);
    // print(head);
    inserattail(head,tail,2);
    // print(head);

    inserattail(head,tail,3);
    // print(head);

    inserattail(head,tail,4);
    // print(head);

    inserattail(head,tail,5);

    inserattail(head,tail,6);
    print(head);

    // inserattail(tail ,head, 1);
    // print(head);

    // inserattail(tail ,head, 2);
    // print(head);
    // inserattail(tail ,head, 3);

    // insertathead(head,tail,10);
    // inserattail(tail ,head, 4);

    // inserattail(tail ,head, 5);
    // print(head);
    // inserattail(tail,head,6);
    // print(head);


    // insertathead(head,tail,12);

    // insertathead(head,tail,13);

    // print(head);
    head =  reversekgorup(head,3);
    print(head);


    
    return 0;
}