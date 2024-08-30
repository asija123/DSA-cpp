#include <iostream>
#include<vector>
#include<algorithm>
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


void insert(Node* &head , int d){
    Node* node1  = new Node(d);
    node1 -> next = head;
    head = node1; 
}
// void sortedlinked(Node* &head){

//     vector<int>datainsert;

//     Node* curr= head;
//     while(curr != NULL){
//         datainsert.push_back(curr->data);
//         curr = curr->next;
//     }
//     sort(datainsert.begin() , datainsert.end());

// }

Node* removeduplicate(Node* head){

    if(head == NULL){
        return NULL;
    }
    // sortedlinked(head);

    Node* curr = head;

    while(curr != NULL){

        if((curr -> next != NULL) && (curr -> data == curr->next->data)){
            Node* next_next = curr->next->next;  
            Node* nodetodelete = curr -> next;
            delete(nodetodelete);
            curr -> next  = next_next;
        }
        else{
            curr = curr ->next;
        }
    }
    return head;
}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    int n;
    cout << "Enter the size ";
    cin >> n;
    int d;
    
    for(int i=0;i<n;i++){
        cin >> d;
        insert(head , d);
    }
    print(head);
    head = removeduplicate(head);
    print(head);

    // sortedlinked(head);
    // print(head);
    
    return 0;
}