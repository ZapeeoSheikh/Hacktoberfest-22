#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* right;
        node* left;
};

node* createnode(int data)
{
    node* create=(node*)malloc(sizeof(node));
    create->data=data;
    create->left=NULL;
    create->right=NULL;

    return create;
}
int main()
{
    node* root=createnode(1);
    node* one=createnode(2);
    node* two=createnode(3);

    root->left=one;
    root->right=two;

    return 0;
}