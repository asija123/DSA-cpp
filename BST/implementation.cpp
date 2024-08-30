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

void levelordertravesal(Node *root)
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
            // purana level travesa ho chuka h
            cout << endl;
            if (!q.empty())
            {
                // queue has some child node
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

Node *insertintobst(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // right part me insert krna
        root->right = insertintobst(root->right, d);
    }
    else
    {
        // left part me insert krna h
        root->left = insertintobst(root->left, d);
    }
    return root;
}

Node *minvalue(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxvalue(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deletefrombst(Node *root, int val)
{
    // base case
    if (root == NULL)
        return root;

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
        // rigth child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minvalue(root->right)->data;
            root->data = mini;
            root->right = deletefrombst(root->right, mini);
            return root;
        }
    }

    else if (root->data > val)
    {
        // left part me jao
        root->left = deletefrombst(root->left, val);
        return root;
    }

    else
    {
        // right part me jao
        root->right = deletefrombst(root->right, val);
        return root;
    }
}

void takeinput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertintobst(root, data);
        cin >> data;
    }
}

int main()
{

    Node *root = NULL;

    cout << "Enter the data" << endl;
    takeinput(root);

    cout << "printing the bst" << endl;
    levelordertravesal(root);

    cout << "minvalue is " << minvalue(root)->data << endl;
    cout << "minvalue is " << maxvalue(root)->data << endl;

    // deleting
    root = deletefrombst(root, 50);
    cout << "printing the bst" << endl;
    levelordertravesal(root);

    cout << "minvalue is " << minvalue(root)->data << endl;
    cout << "minvalue is " << maxvalue(root)->data << endl;
    return 0;
}