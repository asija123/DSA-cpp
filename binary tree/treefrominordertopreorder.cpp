// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void buildtree(Node *&root)
// {
//     queue<Node *> q;
//     cout << "Enter the data" << endl;
//     int data;
//     cin >> data;

//     root = new Node(data);

//     q.push(root);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         cout << "Enter the left data:" << temp->data << endl;
//         int leftdata;
//         cin >> leftdata;

//         if (leftdata != -1)
//         {
//             temp->left = new Node(leftdata);
//             q.push(temp->left);
//         }

//         cout << "Enter the right data:" << temp->data << endl;
//         int rightdata;
//         cin >> rightdata;

//         if (rightdata != -1)
//         {
//             temp->right = new Node(rightdata);
//             q.push(temp->right);
//         }
//     }
// }

// void levelorder(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// Node *intopre(int in[], int pre[], )

//     int main()
// {
//     Node *root = NULL;

//     buildtree(root);
//     levelorder(root);

//     return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

class Node
{

}

int
main()
{

    return 0;
}