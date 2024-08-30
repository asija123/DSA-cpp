#include <iostream>
#include <map>
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

        cout << "Enter the leftdata:" << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter the rightdata:" << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
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

vector<int> verticaltraversel(Node *&root)
{
    map<int, map<int, vector<int>>> nodes;
    queue<pair<Node *, pair<int, int>>> q;

    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    q.push(make_pair(root, make_pair(0, 0)));

    while (!q.empty())
    {
        pair<Node *, pair<int, int>> temp = q.front();
        q.pop();
        // node ka data
        Node *frontnode = temp.first;
        // horizental distance
        int hd = temp.second.first;
        // level
        int level = temp.second.second;

        nodes[hd][level].push_back(frontnode->data);

        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, make_pair(hd - 1, level + 1)));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, make_pair(hd + 1, level + 1)));
        }
    }
    for (auto i : nodes)
    {
        for (auto j : i.second)
        {
            for (auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }
    return ans;
}

int main()
{
    Node *root = NULL;
    buildtree(root);
    cout << endl;
    levelorder(root);

    cout << endl;
    cout << "Vertical order:" << endl;
    vector<int> result = verticaltraversel(root);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}