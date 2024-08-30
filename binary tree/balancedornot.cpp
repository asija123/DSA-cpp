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
int height(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lefth = height(root->left);
    int righth = height(root->right);

    int ans = max(lefth, righth) + 1;

    return ans;
}
bool isbalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool lefth = isbalanced(root->left);
    bool righth = isbalanced(root->right);
    bool diff = abs(height(root->left) - height(root->right) <= 1);

    if (lefth && righth && diff)
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
    Node *root = NULL;
    buildtree(root);

    cout << "level order: " << endl;
    levelorder(root);

    cout << endl;

    cout << "balanced or not: " << isbalanced(root) << endl;
    return 0;
}