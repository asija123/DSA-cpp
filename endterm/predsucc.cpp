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
    cout << "Enter the data:" << endl;
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

pair<int, int> predsucc(Node *root, int key)
{

    if (root == NULL)
    {
        return make_pair(-1, -1);
    }

    Node *temp = root;
    int pred = -1;
    int succ = -1;

    while (temp->data != key)
    {
        if (temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else
        {
            pred = temp->data;
            temp = temp->right;
        }
    }
    if (temp == NULL)
    {
        return make_pair(pred, succ);
    }

    // pred
    Node *lefttree = temp->left;
    while (lefttree != NULL)
    {
        pred = lefttree->data;
        lefttree = lefttree->right;
    }

    Node *righttree = temp->right;
    while (righttree != NULL)
    {
        succ = righttree->data;
        righttree = righttree->left;
    }

    pair<int, int> ans = make_pair(pred, succ);
    return ans;
}

int main()
{
    Node *root = NULL;

    takinginput(root);

    levelorder(root);

    int key;
    cin >> key;

    pair<int, int> result = predsucc(root, key);
    cout << result.first << " " << result.second << endl;

    return 0;
}