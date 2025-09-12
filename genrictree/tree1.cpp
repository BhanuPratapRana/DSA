#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

node *createtree()
{
    cout << "enter the valur for node :";
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    else
    {
        // valid value
        node *root = new node(val);

        // 1 case maine krliya baaki left or right recursion dekh lega
        cout << "enter left child for " << val << endl;
        root->left = createtree();

        // right child
        cout << "enter right child for " << val << endl;
        root->right = createtree();
        return root;
    }
}

void preorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // NLR
    cout << root->data << " ";
    // L
    preorderTraversal(root->left);
    // r
    preorderTraversal(root->right);
}

void inorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LNR
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LRN
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

void levelordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;

    // initial state
    q.push(root);
    q.push(NULL); // to mark the end of level

    // lodic-> step A B C
    while (!q.empty())
    {
        // q se nikalo
        node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            // mtlb ek level complete ho chuka hain
            // check for next level
            cout << endl;
            if (!q.empty())
            {
                // mtlb next level bhi hain
                q.push(NULL); // mark the end of next level
            }
        }
            else
            {

                // fir tum print kro

                cout << front->data << " ";

                // iske bacche khalo
                if (front->left != NULL)
                {
                    q.push(front->left);
                }
                if (front->right != NULL)
                {
                    q.push(front->right);
                }
            }
        }
    
}


    int main()
    {
        node *root;
        root = createtree();
        cout << "printing root : " << root->data << endl;

        levelordertraversal(root);
        // level order traversal
        // 10 50 40 -1 -1 30 -1 -1 -1 20 -1 -1
        //  10
        //  50 20
        //  40 30

        return 0;
    }