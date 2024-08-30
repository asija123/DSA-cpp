#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertathead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, Node *&head, int d)
{

    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, tail, d);
    }

    int cnt = 1;
    Node *temp = head;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, head, d);
        return;
    }

    Node *nodetoinserted = new Node(d);
    nodetoinserted->next = temp->next;
    temp->next = nodetoinserted;
}

void deletefromll(Node *&head, Node *&tail, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
        return;
    }

    int cnt = 1;
    Node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *curr = temp->next;

    if (curr->next == NULL)
    {
        tail = temp;
    }

    temp->next = temp->next->next;
    curr->next = NULL;
    delete curr;
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
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = NULL;
    Node *tail = NULL;
    // for (int i = 0; i < n; i++)
    // {
    //     insertathead(head, tail, arr[i]);
    // }
    // cout << "Insert at head:" << endl;
    // print(head);

    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        insertattail(tail, head, arr[i]);
    }
    cout << "insert at tail:" << endl;

    cout << endl;
    print(head);

    cout << endl;
    // insertatposition(head, tail, 3, 15);
    // print(head);

    deletefromll(head, tail, 5);
    cout << head->data << endl;
    cout << tail->data << endl;
    print(head);

    return 0;
}