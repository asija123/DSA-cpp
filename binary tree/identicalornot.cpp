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

Node *buildtree(Node *&root)
{
    cout << "enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left: " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for right: " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
// void buildtree(Node *&root)
// {
//     queue<Node *> q;

//     cout << "Enter the data: " << endl;
//     int data;
//     cin >> data;

//     root = new Node(data);
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         cout << "Enter the leftnode: " << temp->data << endl;
//         int leftnode;
//         cin >> leftnode;

//         if (leftnode != -1)
//         {
//             temp->left = new Node(leftnode);
//             q.push(temp->left);
//         }

//         cout << "Enter the rightNode: " << temp->data << endl;
//         int rightnode;
//         cin >> rightnode;

//         if (rightnode != -1)
//         {
//             temp->right = new Node(rightnode);
//             q.push(temp->right);
//         }
//     }
// }

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
bool isidentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if (r1 != NULL && r2 == NULL)
    {
        return false;
    }
    if (r1 == NULL && r2 != NULL)
    {
        return false;
    }

    bool lefth = isidentical(r1->left, r2->left);
    bool righth = isidentical(r1->right, r2->right);

    bool val = r1->data == r2->data;

    if (lefth && righth && val)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Node *root1 = NULL;
    Node *root2 = NULL;

    buildtree(root1);

    cout << "level order 1: " << endl;
    levelorder(root1);

    cout << endl;

    buildtree(root2);

    cout << "level order 2: " << endl;
    levelorder(root2);

    cout << endl;
    if (isidentical(root1, root2))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}