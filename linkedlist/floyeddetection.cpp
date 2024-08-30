#include <iostream>
#include<map>
using namespace std;

class Node{

    public:

    int data;
    Node* next = NULL;

    Node(int d){
        this -> data = d;
        this -> next =NULL;
    }
};

void insertathead(Node* &head ,int d){
    Node* temp = new Node(d);

    temp-> next = head;
    head = temp;
}

void insertattail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail-> next = temp -> next;
    tail -> next = temp;
    tail = temp;
}

void insertatposition(Node* &head, Node* &tail , int position ,int d){
    // positon at first
    if(position == 1){
        insertathead(head ,d);
        return;
    }

    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertattail(tail , d);
    }

    Node* toinserted = new Node(d);

    toinserted -> next = temp -> next;
    temp -> next =toinserted;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

bool dectectloop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node* , bool>visited;
    Node* temp = head;

    while(temp != NULL){
        
        // cycle is present
        if(visited[temp] == true){
            cout << "element " << temp -> data << endl;
            return true;
        }
        
        visited[temp] = true;
        temp = temp -> next; 
    }
    return false;
}

Node* flyoddetectloop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
    
}

Node* getstartloop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = flyoddetectloop(head);
    Node* slow = head;
    
    // if there is no loop then 
    if(intersection == NULL){
        return NULL;
    }

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}
Node* removeloop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* startofloop = getstartloop(head);
    Node* temp = startofloop;

    // if we have single node
    if(startofloop == NULL){
        return head;
    }

    while(temp -> next != startofloop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head= node1;
    Node* tail = node1;

    insertattail(tail , 15);
    // print(head);

    // cout << "head " << head->data <<endl ;
    // cout << "tail " << tail->data<< endl ;

     insertattail(tail , 20);
    // print(head);
    // cout << "head " << head->data <<endl ;
    // cout << "tail " << tail->data<< endl ;

    insertathead(head , 8);
    // print(head);

    // cout << "head " << head->data <<endl ;
    // cout << "tail " << tail->data<< endl ;

    insertathead(head , 6);
    // print(head);

    // cout << "head " << head->data <<endl ;
    // cout << "tail " << tail->data<< endl ;

    insertatposition(head, tail ,2 , 7);
    // print(head);

    //  cout << "head " << head->data <<endl ;
    // cout << "tail " << tail->data<< endl ;

    insertatposition(head, tail ,5 , 100);
    // print(head);

    insertatposition(head, tail ,4 , 101);
    // print(head);

    tail -> next = head -> next;
    
    cout << "head " << head->data<< endl ;
    cout << "tail " << tail->data<< endl ;
    // print(head);

    if(flyoddetectloop(head) != NULL){
        cout << "Loop is present" <<endl;
    }
    else{
        cout << "loop no present" << endl;
    }

    Node* loop = getstartloop(head);

    cout << "loop starts at " << loop -> data << endl;

    removeloop(head);
    print(head);
    
    return 0;
}