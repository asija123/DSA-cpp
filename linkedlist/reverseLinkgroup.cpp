#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insert(Node *&head, int d)
{
    Node *node1 = new Node(d);
    node1->next = head;
    head = node1;
}

int getlen(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node *reversewithk(Node *&head, int k)
{
    int len = getlen(head);
    // base case
    // if(head == NULL){
    //     return NULL;
    // }
    if (len < k || head == NULL)
    {
        return head;
    }

    // step1: reverse krege k tak
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reversewithk(next, k);
    }
    return prev;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);

    print(head);
    head = reversewithk(head, 3);
    print(head);

    return 0;
}