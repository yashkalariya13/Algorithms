#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
int maxDepth(TreeNode* root){
    if(root==NULL){
        return 0;
    }else{
        int lDepth=maxDepth(root->left_child);           //for left subtree
        int rDepth=maxDepth(root->right_child);         //for right subtree
        
        if(lDepth>rDepth){
        return(lDepth+1);
    }else{
        return(rDepth+1);
       }
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
    cout<<"The Depth of the Tree is = "<<maxDepth(root)<<endl;
    return 0;
}