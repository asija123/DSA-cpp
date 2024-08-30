#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // create constructor
    Node(int data){
        this->data = data;
        this -> next = NULL;
    }
    // insert at head
    void insertathead(Node* &head ,int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp-> data <<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main()
{
    Node* Node1 = new Node(10);
    // cout << Node1->data <<endl;
    // cout << Node1->next<<endl;

    Node* head = Node1;
    head->print(head);

    head->insertathead(head, 12);
    head->print(head);

    head->insertathead(head, 15);
    head->print(head);


    return 0;
}