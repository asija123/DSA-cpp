#include <iostream>
#include <climits>
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

Node *bulidtree(Node *root, int d)
{

    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = bulidtree(root->right, d);
    }
    else
    {
        root->left = bulidtree(root->left, d);
    }
}

void takinginput(Node *&root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = bulidtree(root, data);
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

bool checkvalidbst(Node *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= min && root->data <= max)
    {
        bool leftans = checkvalidbst(root->left, min, root->data);
        bool rightans = checkvalidbst(root->right, root->data, max);
        return leftans && rightans;
    }
    else
    {
        return false;
    }
}

bool validbst(Node *root)
{
    return checkvalidbst(root, INT_MIN, INT_MAX);
}

int main()
{
    Node *root = NULL;

    takinginput(root);

    cout << endl;
    levelorder(root);
    cout << endl;

    bool ans = validbst(root);

    cout << ans;

    return 0;
}