#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
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

void insertattail(Node* &tail,Node* &head, int d){

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

void inseratposition(Node* &head , Node* &tail ,int position , int d){
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

    if(temp -> next == NULL){
        insertattail(tail,head,d);
        return;
    }

    Node* Nodetoinserted = new Node(d);

    Nodetoinserted -> next = temp -> next;
    temp -> next -> prev = Nodetoinserted;
    temp -> next = Nodetoinserted;
    Nodetoinserted -> prev = temp;

}

void deletenode(Node* &head , Node* &tail, int position){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev =NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        if(prev -> next ==NULL){
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

int getlen(Node* &head){
    int len = 0;
     Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

int main()
{

    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    cout << getlen(head) << endl;
    insertathead(head, tail ,12);
    print(head);
    
    insertathead(head,tail, 15);
    print(head);

    insertathead(head,tail, 16);
    print(head);

    insertattail(tail,head,25);
    print(head);

    inseratposition(head, tail ,1,100);
    print(head);

    inseratposition(head, tail ,6,101);
    print(head);

    inseratposition(head, tail ,4,1);
    print(head);

    deletenode(head , tail ,7);
    print(head);
    cout << "head is " << head -> data << endl;
    cout << "tail is "<< tail -> data << endl;

    return 0;
} 