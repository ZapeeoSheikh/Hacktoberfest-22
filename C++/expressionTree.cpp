#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int mod = 1e9 + 7;
constexpr int INF = 0x3f3f3f3f;
constexpr double eps = 1e-7;
class Node
{
public:
    char data;
    Node *left;
    Node *right;
};
class expressionTree
{
    string postfix;
    Node* root;

public:
    expressionTree(string s);
    Node* expressionTreeCreate();
    bool isOperator(char c);
    Node *initializeNode(char data);
    void inOrederTraversal(Node* root);
    void preOrederTraversal(Node* root);
    ~expressionTree(){};
};

expressionTree::expressionTree(string s)
{
    postfix = s;
    root = NULL;
}
bool expressionTree::isOperator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '%' || c == '*' || c == '^')
        return true;
    return false;
}
Node *expressionTree::initializeNode(char data)
{
    Node * node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
Node* expressionTree::expressionTreeCreate()
{
    stack<Node *> st;
    Node* ptr;
    for (auto it : postfix)
    {
        if (!isOperator(it))
        {
            ptr = initializeNode(it);
            st.push(ptr);
        }
        else
        {
            Node* right = st.top();
            st.pop();
            Node* left = st.top();
            st.pop();
            ptr = initializeNode(it);
            root = ptr;
            ptr->left = left;
            ptr->right = right;
            st.push(ptr);
            
        }
        
    }
    return root;
}
void expressionTree::inOrederTraversal(Node* root)
{
    if(root)
    {
        inOrederTraversal(root->left);
        cout<<root->data<<" ";
        inOrederTraversal(root->right);
    }
}
void expressionTree::preOrederTraversal(Node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preOrederTraversal(root->left);
        preOrederTraversal(root->right);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    expressionTree t("xyz/-kd*-");
   Node* root = t.expressionTreeCreate();
    t.inOrederTraversal(root);
    cout<<endl;
    t.preOrederTraversal(root);
    cout<<endl;
    return 0;
}
