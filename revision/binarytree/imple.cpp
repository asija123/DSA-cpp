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

    cout << "Enter the data:" << endl;
    int data;
    cin >> data;

    root = new Node(data);

    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter the data for left Node: " << temp->data << endl;
        int leftnode;
        cin >> leftnode;

        if (leftnode != -1)
        {
            temp->left = new Node(leftnode);
            q.push(temp->left);
        }

        cout << "Enter the right data: " << temp->data << endl;
        int rightnode;
        cin >> rightnode;

        if (rightnode != -1)
        {
            temp->right = new Node(rightnode);
            q.push(temp->right);
        }
    }
}

void inorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void perorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    perorder(root->left);
    perorder(root->right);
}

void postorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;

    return ans;
}

pair<bool, int> isbalancedfast(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<int, int> lefth = isbalancedfast(root->left);
    pair<int, int> righth = isbalancedfast(root->right);

    bool leftans = lefth.first;
    bool rightans = righth.first;

    bool diff = abs(lefth.second - righth.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(lefth.second, righth.second) + 1;

    if (leftans && rightans && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

bool balanced(Node *root)
{
    // if (root == NULL)
    // {
    //     return true;
    // }

    // int leftb = height(root->left);
    // int rightb = height(root->right);

    // if (abs(leftb - rightb) <= 1 && balanced(root->left) && balanced(root->right))
    // {
    //     return true;
    // }
    // return false;
    return isbalancedfast(root).first;
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

int main()
{
    Node *root = NULL;
    buildtree(root);

    cout << endl;

    cout << "level order:" << endl;
    levelorder(root);

    cout << " inorder:" << endl;

    inorder(root);

    cout << "preorder:" << endl;
    perorder(root);

    cout << "postorder:" << endl;
    postorder(root);
    cout << endl;
    cout << "height is: " << height(root) << endl;

    bool ans = balanced(root);

    if (ans)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}