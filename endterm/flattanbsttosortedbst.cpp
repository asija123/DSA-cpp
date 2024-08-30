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

void inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

Node *flattan(Node *root)
{
    vector<int> in;
    inorder(root, in);

    int n = in.size();

    Node *newroot = new Node(in[0]);

    Node *curr = newroot;

    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(in[i]);
        curr->left = NULL;
        curr->right = temp;

        curr = temp;
    }

    curr->left = NULL;
    curr->right = NULL;

    return newroot;
}

int main()
{
    Node *root = NULL;

    takinginput(root);

    levelorder(root);

    Node *result = flattan(root);
    Node *curr = result;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;

    curr = result;

    while (curr != NULL)
    {
        Node *next = curr->right;
        delete curr;
        curr = next;
    }
}