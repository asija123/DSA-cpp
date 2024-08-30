// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }
// };

// void insertattail(Node *&tail, Node *&head, int d)
// {
//     if (tail == NULL)
//     {
//         Node *temp = new Node(d);
//         head = temp;
//         tail = temp;
//         return;
//     }

//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }

// void print(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getlength(Node *head)
// {
//     Node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// Node *reverseLL(Node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     Node *curr = NULL;
//     Node *temp = head;
//     Node *forward = temp->next;

//     while (temp != NULL)
//     {

//         forward = temp->next;
//         temp->next = curr;
//         curr = temp;
//         temp = forward;
//     }
//     return curr;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int n;
//     cout << "Enter the size:" << endl;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         insertattail(tail, head, arr[i]);
//     }
//     print(head);

//     cout << getlength(head);

//     cout << endl;

//     Node *result = reverseLL(head);
//     print(result);

//     return 0;
// }

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

void insertattail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
        return;
    }

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

bool detectloop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    if (slow == fast)
    {
        return true;
    }
    else
    {
        return false;
    }
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

    for (int i = 0; i < n; i++)
    {
        insertattail(tail, head, arr[i]);
    }

    print(head);
    cout << endl;

    bool ans = detectloop(head);
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}