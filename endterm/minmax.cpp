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
    return temp;
}

Node *maxi(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
int main()
{
    Node *root = NULL;

    takinginput(root);

    cout << endl;

    levelorder(root);

    cout << endl;
    // Node *ans1 = mini(root);
    cout << mini(root)->data << endl;
    // Node *ans2 = maxi(root);
    cout << maxi(root)->data << endl;

    return 0;
}