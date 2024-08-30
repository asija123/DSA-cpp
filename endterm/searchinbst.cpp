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

Node *buildbst(Node *root, int d)
{

    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = buildbst(root->right, d);
    }
    else
    {
        root->left = buildbst(root->left, d);
    }
}

void takinginput(Node *&root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = buildbst(root, data);
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

bool searchinbst(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == x)
    {
        return true;
    }

    if (root->data > x)
    {
        searchinbst(root->left, x);
    }
    else
    {
        searchinbst(root->right, x);
    }
}

int main()
{
    Node *root = NULL;
    takinginput(root);

    cout << endl;

    levelorder(root);

    cout << endl;

    int x;
    cin >> x;

    bool ans = searchinbst(root, x);
    cout << ans;

    return 0;
}