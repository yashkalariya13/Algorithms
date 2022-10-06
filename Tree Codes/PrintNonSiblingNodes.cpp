#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left_child;
    TreeNode* right_child;
};
TreeNode* newTreeNode(int data){
    TreeNode* treenode=new TreeNode();
    treenode->data=data;
    treenode->left_child=NULL;
    treenode->right_child=NULL;
    return(treenode);
}
int printNonSibling(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    if(root->left_child!=NULL && root->right_child!=NULL){
        printNonSibling(root->left_child);
        printNonSibling(root->right_child);
    }
    else if(root->right_child!=NULL){
        cout<<root->right_child->data<<endl;
        printNonSibling(root->right_child);
    }
    else if(root->left_child!=NULL){
        cout<<root->left_child->data<<endl;
        printNonSibling(root->left_child);
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);   
    root->left_child=newTreeNode(1); 
    root->right_child=newTreeNode(2);
    cout<<"The Root Node is "<<root->data<<endl;      
    cout<<"Left Child of Root Node is "<<root->left_child->data<<endl;
    cout<<"Right Child of Root Node is "<<root->right_child->data<<endl;
    cout<<endl;
    root->left_child->left_child=newTreeNode(11);  
    cout<<"Left Child of Left Child is "<<root->left_child->left_child->data<<endl;
    cout<<endl;
    root->right_child->left_child=newTreeNode(21); 
    root->right_child->right_child=newTreeNode(22);
    cout<<"Left Child of Right Child is "<<root->right_child->left_child->data<<endl;
    cout<<"Right Child of Left Child is "<<root->right_child->right_child->data<<endl;
    cout<<endl;
    cout<<"The Node which does not have a sibling is"<<endl;
    printNonSibling(root);
    return 0;
}