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
    cout << "Enter the data" << endl;
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
int solve(Node *root, int &i, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    int left = solve(root->left, i, k);

    if (left != -1)
    {
        return left;
    }

    i++;
    if (i == k)
    {
        return root->data;
    }

    return solve(root->right, i, k);
}

int ksmall(Node *root, int k)
{
    int i = 0;
    int ans = solve(root, i, k);
    return ans;
}
int main()
{
    Node *root = NULL;
    takinginput(root);

    levelorder(root);

    int k;
    cin >> k;
    int result = ksmall(root, k);
    cout << result;

    return 0;
}