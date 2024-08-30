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

void buildtree(Node *&root)
{
    queue<Node *> q;

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter the leftnode: " << temp->data << endl;
        int leftnode;
        cin >> leftnode;

        if (leftnode != -1)
        {
            temp->left = new Node(leftnode);
            q.push(temp->left);
        }

        cout << "Enter the rightNode: " << temp->data << endl;
        int rightnode;
        cin >> rightnode;

        if (rightnode != -1)
        {
            temp->right = new Node(rightnode);
            q.push(temp->right);
        }
    }
}

void levelordertraversel(Node *root)
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
int diameter(Node *&root)
{

    if (root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + 1 + height(root->right);

    int ans = max(op1, max(op2, op3));

    return ans;
}
int main()
{
    Node *root = NULL;
    buildtree(root);

    cout << endl;
    cout << "level order is: " << endl;
    levelordertraversel(root);

    cout << "height is: " << height(root) << endl;

    cout << "Diameter is: " << diameter(root) << endl;

    return 0;
}