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
    cout << "Enter the data: " << endl;
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

void inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

vector<int> mergearrays(vector<int> &a, vector<int> &b)
{

    vector<int> ans(a.size() + b.size());
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            ans[k++] = a[i];
            i++;
        }
        else
        {
            ans[k++] = b[j];
            j++;
        }
    }

    while (i < a.size())
    {
        ans[k++] = a[i];
        i++;
    }
    while (j < b.size())
    {
        ans[k++] = b[j];
        j++;
    }
    return ans;
}

Node *sortedarraytobst(int s, int e, vector<int> &arr)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    Node *root = new Node(arr[mid]);
    root->left = sortedarraytobst(s, mid - 1, arr);
    root->right = sortedarraytobst(mid + 1, e, arr);
    return root;
}

int main()
{
    Node *root1 = NULL;
    Node *root2 = NULL;

    takinginput(root1);
    levelorder(root1);

    takinginput(root2);
    levelorder(root2);

    vector<int> bst1;
    vector<int> bst2;

    inorder(root1, bst1);
    inorder(root2, bst2);

    vector<int> mergearray = mergearrays(bst1, bst2);

    for (int i = 0; i < mergearray.size(); i++)
    {
        cout << mergearray[i] << " ";
    }

    cout << endl;

    int s = 0;
    int e = mergearray.size() - 1;

    Node *result = sortedarraytobst(s, e, mergearray);

    levelorder(result);

    return 0;
}