#include <iostream>
#include<map>
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
void insert(Node* &head ,int d){
    Node* node1  = new Node(d);
    node1 -> next = head;
    head= node1;
}

bool dectectlopp(Node* head){

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
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " "<< endl;
        temp = temp -> next;
    }
    cout << endl;
}


int main()
{
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cout << "Enter the size ";
    cin >> n;
    int d;

    for(int i=0; i<n; i++){
        cin >> d;
        insert(head , d);
    }
    print(head);

    cout << "head is " << head -> data << endl;
    cout << "tail is " << tail -> data << endl;


    
    tail -> next = head -> next;

    if(dectectlopp(head)){
        cout << "Loop is present"<< endl;
    }
    else{
        cout << "not present"<<endl;
    }

    
    return 0;
}