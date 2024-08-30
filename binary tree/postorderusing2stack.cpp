#include <iostream>
#include <queue>
#include <stack>
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

        cout << "Enter the left Node: " << temp->data << endl;
        int leftnode;
        cin >> leftnode;

        if (leftnode != -1)
        {
            temp->left = new Node(leftnode);
            q.push(temp->left);
        }

        cout << "Enter the right Node: " << temp->data << endl;
        int rightnode;
        cin >> rightnode;

        if (rightnode != -1)
        {
            temp->right = new Node(rightnode);
            q.push(temp->right);
        }
    }
}

vector<int> postordertravesel(Node *root)
{
    stack<Node *> s1;
    stack<Node *> s2;
    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    s1.push(root);

    while (!s1.empty())
    {
        root = s1.top();
        s1.pop();

        s2.push(root);

        if (root->left != NULL)
        {
            s1.push(root->left);
        }

        if (root->right != NULL)
        {
            s1.push(root->right);
        }
    }

    while (!s2.empty())
    {
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    return ans;
}

int main()
{
    Node *root = NULL;
    buildtree(root);
    cout << endl;

    cout << "Postorder travesel is: " << endl;
    vector<int> ans = postordertravesel(root);

    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}