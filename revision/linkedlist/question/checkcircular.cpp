#include <iostream>
using namespace std;

bool iscircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == Heaad){
        return true;
    }

    return false;


}
int main()
{
    
    return 0;
}