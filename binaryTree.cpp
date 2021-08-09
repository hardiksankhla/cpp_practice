#include<iostream>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void preOrder(treeNode* root){
    
    if (root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(treeNode* root){
    
    if (root==NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(treeNode* root){
    
    if (root==NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    treeNode* root = new treeNode(1);
    root->left = new treeNode(2);
    root->right = new treeNode(3);
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);
    root->right->left = new treeNode(6);
    root->right->right = new treeNode(7);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    return 0;
}
