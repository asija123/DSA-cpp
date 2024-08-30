// this code represent that if we have node and then we can do
// #include <iostream>
// using namespace std;

// class Node{
    
//     public:

//     int data;
//     Node* next =NULL;
//     Node* prev = NULL;

//     // constructor
//     Node(int d){
//         this -> data =d;
//         this -> next = NULL;
//         this -> prev =NULL;
//     }

// };
// void print(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getlength(Node* head){
//     int len =0;
//     Node* temp = head;

//     while(temp != NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }
// void insertathead(Node* &head , int d){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head->prev = temp;
//     head= temp;
// }
// void insertattail(Node* &tail ,int d){
//     Node* temp = new Node(d);
//     tail->next = temp;
//     temp->prev = tail;
//     tail = temp;
// }

// void insertatposition(Node* &tail , Node* &head , int position , int d){
//      if(position==1){
//             insertathead(head,d);
//             return;
//         }
//         Node* temp = head;
//         int cnt =1;
//         while(cnt<position-1){
//             temp = temp->next;
//             cnt++;
//         }
//         if(temp->next == NULL){
//             insertattail(tail , d);
//             return;
//         }

//         Node* nodetoinserted = new Node(d);
//         nodetoinserted -> next = temp -> next;
//         temp -> next -> prev = nodetoinserted;
//         temp -> next = nodetoinserted;
//         nodetoinserted -> prev = temp;

// }

// int main()
// {
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     print(head);
//     cout << getlength(head) <<endl;

//     insertathead(head ,11);
//     print(head);

//      insertathead(head ,7);
//     print(head);

//     insertattail(tail,20);
//     print(head);

//     insertatposition(tail ,head ,2 , 40);
//     print(head);

//     insertatposition(tail ,head ,3 , 5);
//     print(head);

//     insertatposition(tail ,head ,1 , 1);
//     print(head);

//     insertatposition(tail ,head ,8 , 2);
//     print(head);

//     cout << "head " <<head <<endl;
//     cout << "tail " << tail <<endl;
    
//     return 0;
// }

// in this code agr apne pass koi node h hi nhi toh apne is code se handle krege
#include <iostream>
using namespace std;

class Node{
    
    public:

    int data;
    Node* next =NULL;
    Node* prev = NULL;

    // constructor
    Node(int d){
        this -> data =d;
        this -> next = NULL;
        this -> prev =NULL;
    }

    // destructoe for delete the memory
    ~Node(){
        int val = this -> data;

        if(next!= NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free" << val << endl;

    }

};
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(Node* head){
    int len =0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(Node* &head, Node* &tail , int d){

      if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertattail(Node* &tail, Node* &head ,int d){
    if(tail == NULL){
    Node* temp = new Node(d);
    tail =temp;
    head =temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

    }
}

void insertatposition(Node* &tail , Node* &head , int position , int d){
     if(position==1){
            insertathead(head,tail,d);
            return;
        }
        Node* temp = head;
        int cnt =1;

        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }
        if(temp->next == NULL){
            insertattail(tail,head , d);
            return;
        }
        
        Node* nodetoinserted = new Node(d);
        nodetoinserted -> next = temp -> next;
        temp -> next -> prev = nodetoinserted;
        temp -> next = nodetoinserted;
        nodetoinserted -> prev = temp;

}

deletenode(int position, Node* head){
    // delete at start position
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp -> next = NULL;
        delete temp;
        cout << "temp is " << temp ->data <<" ";
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        
        delete curr;
    }
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    // cout << getlength(head) <<endl;

    insertathead(head,tail ,11);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;


     insertathead(head,tail ,7);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    insertattail(tail,head,20);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    insertatposition(tail ,head ,2 , 40);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    insertatposition(tail ,head ,3 , 5);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    insertatposition(tail ,head ,1 , 4);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    insertatposition(tail ,head ,7 , 2);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    deletenode(5 ,head);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;
    deletenode(6 ,head);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;
    deletenode(4 ,head);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;
    deletenode(1 ,head);
    print(head);
    cout << "head " << head->data <<endl;
    cout << "tail " << tail->data <<endl;

    
    return 0;
}