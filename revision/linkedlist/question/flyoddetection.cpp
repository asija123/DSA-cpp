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

void insertathead(Node* &head , Node* &tail ,int d){
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
void inserattail(Node* &tail ,Node* &head , int d){
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

void insertatposition(Node* &head, Node* &tail ,int position, int d){

    if(position == 1){
        insertathead(head,tail,d);
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt <position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        inserattail(tail,head,d);
    }

    Node* nodetoinserted = new Node(d);

    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

Node* floyddetectloop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast -> next;
        if(fast -> next != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            cout << "present at " << slow -> data << endl;
            return slow;
        }

    }
    return NULL;
}

Node* getstartloop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floyddetectloop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection  = intersection -> next;
    }
    return slow;
}

void removeloop(Node* head){
    if(head == NULL){
        return;
    }
    Node* startofloop = getstartloop(head);
    Node* temp = startofloop;

    while(temp -> next != startofloop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main()
{

    Node* head= NULL;
    Node* tail = NULL;

    insertathead(head, tail , 1);
    print(head);

    inserattail(tail ,head, 2);
    print(head);

    inserattail(tail ,head, 3);
    print(head);

    inserattail(tail ,head, 4);
    print(head);

    inserattail(tail ,head, 5);
    print(head);

    inserattail(tail ,head, 6);
    print(head);
    
    tail -> next = head -> next;

    if(floyddetectloop(head) != NULL){
        cout << "cycle is present" << endl;
    }
    else{
        cout << "cycle is not present" << endl;
    }

    Node* loop = getstartloop(head);
    cout << "loop at " << loop -> data << endl;

    removeloop(head);
    print(head);

    return 0;
}