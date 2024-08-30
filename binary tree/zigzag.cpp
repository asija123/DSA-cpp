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
vector<int> zigzag(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }
    queue<Node *> q;
    q.push(root);

    bool lefttoright = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        // level process
        for (int i = 0; i < size; i++)
        {
            Node *frontnode = q.front();
            q.pop();

            int index = lefttoright ? i : size - i - 1;
            ans[index] = frontnode->data;

            if (frontnode->left)
            {
                q.push(frontnode->left);
            }
            if (frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
        lefttoright = !lefttoright;

        for (auto i : ans)
        {
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    Node *root = NULL;

    buildtree(root);

    cout << endl;

    cout << "level is: " << endl;
    levelordertraversel(root);

    cout << endl;

    cout << "zigzag is: " << endl;
    vector<int> output = zigzag(root);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}