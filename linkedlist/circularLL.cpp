#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next =NULL;

    Node(int d){
        this->data = d;
        this -> next =NULL;
    }
    ~Node(){
        int value = this-> data;
        if(this->next != NULL){
            delete next;
            next= NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode; 
    }
    else{
        Node* curr= tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail , int value){
    // empty list 
    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }
    else{
        // non empty
        // assuming that value is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr-> data!= value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        // >=2 node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}

void print(Node* tail){

    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    
    cout <<endl;

}
int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    
    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 3, 2);
    print(tail);

    insertNode(tail, 6, 8);
    print(tail);

    deleteNode(tail , 2);
    print(tail);

    deleteNode(tail , 3);
    print(tail);




    return 0;
}