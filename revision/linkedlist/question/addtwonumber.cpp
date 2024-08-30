// if the number are give not given in sorted order thean we have to reverse the number thena we have to add

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

Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;


}

void insertattail(Node* &head , Node* &tail , int d){
    Node* temp = new Node(d);

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }
}

Node* add(Node* first , Node* second){

    int carry = 0;

    Node* anshead = NULL;
    Node* anstail = NULL;

    while(first != NULL || second != NULL || carry != 0){

        int val1 = 0;
        if(first != NULL){
            val1 = first -> data;
        }

        int val2 = 0;
        if(second != NULL){
            val2 = second -> data;
        }

        int sum = carry + val1 + val2;

        int digit = sum %10;

        insertattail(anshead,anstail,digit);

        int carry = sum/10;

        if(first != NULL){
            first = first -> next;
        }

        if(second != NULL){
            second = second -> next;
        }
        return anshead;
    }

}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    Node* first = reverse(first);
    Node* second = reverse(second);

    Node* ans = add(first,second);

    ans = reverse(ans);
    return ans;
    
}