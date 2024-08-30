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
void traverseleft(Node *root, vector<int> &ans)
{
    // base case
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    ans.push_back(root->data);
    if (root->left)
    {
        traverseleft(root->left, ans);
    }
    else
    {
        traverseleft(root->right, ans);
    }
}

void traverseleaf(Node *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    traverseleaf(root->left, ans);
    traverseleaf(root->right, ans);
}

void traverseright(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->right)
    {
        traverseright(root->right, ans);
    }
    else
    {
        traverseright(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    ans.push_back(root->data);

    traverseleft(root->left, ans);

    // traverse leaf node
    // left subtree
    traverseleaf(root->left, ans);
    // right subtree
    traverseleaf(root->right, ans);

    // right part
    traverseright(root->right, ans);

    return ans;
}

int main()
{
    Node *root = NULL;

    buildtree(root);

    cout << endl;
    cout << "level is: " << endl;
    levelordertraversel(root);

    cout << endl;
    vector<int> ans = boundary(root);
    // boundary(root, ans);
    for (auto val : ans)
    {
        cout << "val is: " << val << " ";
    }

    return 0;
}