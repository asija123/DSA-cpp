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

Node *buildtree(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = buildtree(root->right, d);
    }
    else
    {
        root->left = buildtree(root->left, d);
    }
    return root;
}

void takinginput(Node *&root)
{
    cout << "Enter the data: " << endl;

    int data;
    cin >> data;

    while (data != -1)
    {
        root = buildtree(root, data);
        cin >> data;
    }
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

Node *LCA(Node *root, int p, int q)
{

    if (root == NULL)
    {
        return NULL;
    }

    while (root != NULL)
    {
        if (root->data < p && root->data < q)
        {
            root = root->right;
        }
        else if (root->data > p && root->data > q)
        {
            root = root->left;
        }
        else
        {
            return root;
        }
    }
}

int main()
{
    Node *root = NULL;

    takinginput(root);

    levelorder(root);

    int p, q;
    cin >> p >> q;

    Node *ans = LCA(root, p, q);

    cout << ans->data;

    return 0;
}