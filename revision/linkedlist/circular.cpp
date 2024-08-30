#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data  = d;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;

        if(this -> next = NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Mermory is free for the value " << value << endl;
    }

};

void inserttail(Node* &tail , int element , int d){

   if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
   }
   else{
    Node* curr = tail;

    while(curr -> data != element){
        curr = curr -> next;
    }

    Node* temp = new Node(d);
    temp -> next  = curr -> next;
    curr -> next = temp;
   }
}

void deletenode(Node* &tail , int val){

    if(tail == NULL){
        cout << "List is empty";
        return;
    }
    else{

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != val){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(curr == prev){
            tail =NULL;
        }

        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout << "List is empty";
        return;
    }
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }
    while(tail != temp);
        cout << endl;
}

int main()
{
    Node* tail = NULL;

    inserttail(tail , 2,4);
    print(tail);
    
    inserttail(tail,4,5);
    print(tail);
    
    inserttail(tail,5,7);
    print(tail);

    inserttail(tail,7,9);
    print(tail);

    inserttail(tail,4,1);
    print(tail);

    inserttail(tail,5,2);
    print(tail);
    

    deletenode(tail , 5);
    print(tail);

    
    return 0;
}