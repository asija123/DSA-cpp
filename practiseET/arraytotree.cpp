#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void BuildFromLevelOrder(Node *&root, vector<int> &arr)
{
    if (arr.size() == 0)
    {
        return;
    }

    queue<Node *> q;
    root = new Node(arr[0]);
    q.push(root);

    int i = 1;
    while (i < arr.size())
    {
        Node *temp = q.front();
        q.pop();

        if (arr[i] != -1)
        {
            temp->left = new Node(arr[i]);
            q.push(temp->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1)
        {
            temp->right = new Node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
}
void SpiralPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    bool leftToRight = true;

    vector<int> arr;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp(size);
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            temp[index] = node->data;

            if (node->left)
            {
                q.push(node->left);
            }

            if (node->right)
            {
                q.push(node->right);
            }
        }
        leftToRight = !leftToRight;
        for (auto i : temp)
        {
            arr.push_back(i);
        }
    }

    for (auto j : arr)
    {
        cout << j << " ";
    }
    cout << endl;
}
void LeafNode(Node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    LeafNode(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    LeafNode(root->right, count);
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
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    BuildFromLevelOrder(root, arr);
    levelorder(root);
    SpiralPrint(root);

    // int count = 0;
    // LeafNode(root, count);
    // cout << count << endl;

    // cout << LCA(root, 4, 6);

    return 0;
}