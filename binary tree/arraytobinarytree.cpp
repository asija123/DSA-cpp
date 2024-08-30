// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *arraytobinary(vector<int> &arr, int index)
// {
//     if (index >= arr.size())
//     {
//         return NULL;
//     }
//     Node *root = new Node(arr[index]);
//     root->left = arraytobinary(arr, 2 * index + 1);
//     root->right = arraytobinary(arr, 2 * index + 2);

//     return root;
// }

// void levelorder(Node *root)
// {
//     queue<Node *> q;

//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main()
// {
//     cout << "Enter the size" << endl;
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     Node *root = arraytobinary(arr, 0);
//     cout << endl;

//     levelorder(root);

//     return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *arraytobinary(vector<int> &arr, int index)
{
    if (index >= arr.size())
    {
        return NULL;
    }
    Node *root = new Node(arr[index]);
    root->left = arraytobinary(arr, 2 * index + 1);
    root->right = arraytobinary(arr, 2 * index + 2);

    return root;
}

void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    cout << "Enter the size:" << endl;
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = arraytobinary(arr, 0);
    levelorder(root);

    return 0;
}