#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data = val;
        this->left = NULL;
        right = NULL;
    }
};

node *buildBST(int val, node *root)
{
    if (root == NULL)
    {
        root = new node(val);
        return root;
    }
    if (val < root->data)
    {
        // left subtree
        root->left = buildBST(val, root->left);
    }
    else
    {
        // right subtree
        root->right = buildBST(val, root->right);
    }
    return root;
}

void preorder(node* root){
    if(root== NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//inoreder is always sorted order in BST
void inorder(node* root){
    if(root== NULL){
        return ;
    }
    inorder(root->left);
    cout << root->data << " ";  
    inorder(root->right);
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

void createtree(node *&root)
{
    cout << "enter the value for node : ";
    int val;
    cin >> val;

    while (val != -1)
    {
        root = buildBST(val, root);
        cout << "enter the value for node : ";
        cin >> val;
    }
}

void levelordertraversal(node *root)
{
    queue<node *> q;

    // initial state
    q.push(root);
    q.push(NULL); // to mark the end of level

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL); // mark the end of next level
            }
        }
            else
            {
                cout << front->data << " ";

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

int getmin(node* root){
    if(root ==NULL){
        return -1;
    }
    while(root->left!= NULL){
        root=root->left;
    }
    return root->data;

}

int getmax(node* root){
    if(root ==NULL){
        return -1;
    }
    while(root->right!= NULL){
        root=root->right;
    }
    return root->data;

}

bool searchBST(node* root,  int target){
    if(root==NULL){
        return false;
    }

    if(root->data == target){
        return true;
    }
    else{
        if(target < root->data){
          return  searchBST(root->left, target);
        }
        else{
            return searchBST(root->right, target);
        }
    }
    return false;
}
int main()
{
    node *root = NULL;
    createtree(root);
    cout << "Level Order Traversal of BST: " << endl;
    levelordertraversal(root);
    cout << endl;


    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
  
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    cout<<"Min element :" <<getmin(root)<<endl;
    cout<<"Max element :" <<getmax(root)<<endl;

    //tc max min -- O(h) -- height of tree
    // tc traversal -- O(n) -- for all nodes

    bool searchans = searchBST(root, 70);

    if(searchans){
        cout<<"node found "<<endl;

    }
    else{
        cout<<"node not found "<<endl;
    }

    return 0;
}