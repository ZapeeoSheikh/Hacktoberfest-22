#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int mod = 1e9 + 7;
constexpr int INF = 0x3f3f3f3f;
constexpr double eps = 1e-7;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class splayTree
{
private:
    Node* root;
    Node* rightRotate(Node* root);
    Node* leftRotate(Node* root);
public:
    splayTree(/* args */);
    Node* splay(Node* root,int data);
    Node* insert(Node* root, int data);
    Node* deleteNode(Node* root, int data);
    Node* createNode(int data);
    void inOrder(Node* root);
    void preOrder(Node* root);
    Node* search(Node *root, int data);
    ~splayTree();
};

splayTree::splayTree(/* args */)
{
    root = NULL;
}
void splayTree::inOrder(Node* root)
{
    if(root)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
void splayTree::preOrder(Node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        inOrder(root->left);
        inOrder(root->right);
    }
}
Node *splayTree::leftRotate(Node *root)
{
    Node *ptr = root->right;
    root->right = ptr->left;
    ptr->left = root;
    return ptr;
}
Node *splayTree::rightRotate(Node *root)
{
    Node *ptr = root->left;
    root->left = ptr->right;
    ptr->right = root;
    return ptr;
}
Node* splayTree::createNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
Node* splayTree::insert(Node* root, int data)
{
    if(!root)
    {
    return createNode(data);
    }
    root = splay(root,data);
    if(root->data == data)
    {
        return root; // Already Present
    }
    Node* node = createNode(data);
    if(root->data > data)
    {
        node->right = root;
        node->left = root->left;
        root->left = NULL;
    }
     else
    {
        node->left = root;
        node->right = root->right;
        root->right = NULL;
    }
    return node;
}
Node* splayTree::splay(Node* root,int data)
{
    if(!root || root->data == data)
    {
        return root;
    }
   if(root->data> data)
    {
        if(root->left == NULL)
        {
            return root;
        }
        // zig-zig
        if(root->left->data > data)
        {
            root->left->left = splay(root->left->left, data);
            root = rightRotate(root);
        }
        else 
        {
            if(root->left->right)
            root->left->right = splay(root->left->right,data);
            root->left = leftRotate(root->left); 
        }
        return (root->left == NULL)?root:rightRotate(root);
    }
   else if(root->data< data)
    {
        if(root->right == NULL)
        {
            return root;
        }
        // zag-zag
        if(root->right->data < data)
        {
            root->right->right = splay(root->right->right, data);
            root = leftRotate(root);
        }
        else 
        {
            if(root->right->left)
            root->right->left = splay(root->right->left,data);
            root->right = leftRotate(root->right); 
        }
        return (root->right == NULL)?root:leftRotate(root);
    }
    
}
Node* splayTree::deleteNode(Node* root, int data)
{
    Node* temp;
    if(!root)
    return NULL;
    root = splay(root, data);
    if(!root->left)
    {
        temp = root;
        root = temp->left;
    }
    else{
        // Left child exist 
        temp = root;
        root = splay(root->left,data);
        root->right = temp->right;
    }
    delete temp;
    return root;
}
Node* splayTree::search(Node *root, int data) 
{ 
    return splay(root, data); 
}
splayTree::~splayTree()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    splayTree t;
Node *root = t.createNode(100); 
    root->left = t.createNode(50); 
    root->right = t.createNode(200); 
    root->left->left = t.createNode(40); 
    root->left->left->left = t.createNode(30); 
    root->left->left->left->left = t.createNode(20);
    root = t.insert(root,25);

    cout << "Preorder traversal of the modified Splay tree is"<<endl; 
    t.preOrder(root); 
    cout<<endl;
    root = t.deleteNode(root,100);
    cout << "Preorder traversal of the modified Splay tree is"<<endl; 
    t.preOrder(root); 
    return 0;
}
