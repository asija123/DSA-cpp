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

Node *mini(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return root;
}

Node *maxi(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return root;
}
Node *deletion(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int minval = mini(root->right)->data;
            root->data = minval;
            root->right = deletion(root->right, minval);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletion(root->left, val);
        return root;
    }
    else
    {
        root->right = deletion(root->right, val);
        return root;
    }
}

int main()
{
    Node *root = NULL;
    takinginput(root);
    levelorder(root);

    cout << endl
         << endl;
    // deletion
    int val;
    cin >> val;

    deletion(root, val);
    levelorder(root);

    return 0;
}