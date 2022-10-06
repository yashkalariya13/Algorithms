#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <queue>
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
    return (treenode);
}
void BreadthFirstTraversal(TreeNode* root){
    queue<TreeNode*> q;
    TreeNode* temp_tree_node=root;
    while(temp_tree_node){
        cout<<temp_tree_node->data<<" ";
        if(temp_tree_node->left_child){
            q.push(temp_tree_node->left_child);
        }
        if(temp_tree_node->right_child){
            q.push(temp_tree_node->right_child);
        }
        temp_tree_node=q.front();
        q.pop();
    }
}
int size(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    else{
        return(size(root->left_child) + 1 + size(root->right_child));
    }
}
int countLeafNodes(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    if(root->left_child==NULL && root->right_child==NULL){
        return 1;
    }
    else{
        return(countLeafNodes(root->left_child)+countLeafNodes(root->right_child));
    }
}
int maxDepth(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    else{
        int lDepth=maxDepth(root->left_child);
        int rDepth=maxDepth(root->right_child);
        
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
    root->left_child->left_child=newTreeNode(11);
    root->left_child->right_child=newTreeNode(12);
    cout<<"Left Child of Left Child is "<<root->left_child->left_child->data<<endl;
    cout<<"Right Child of Left Child is "<<root->left_child->right_child->data<<endl;
    cout<<endl;
    root->right_child->left_child=newTreeNode(21);
    root->right_child->right_child=newTreeNode(22);
    cout<<"Left Child of Right Child is "<<root->right_child->left_child->data<<endl;
    cout<<"Right Child of Right Child is "<<root->right_child->right_child->data<<endl;
    cout<<endl;
    cout<<"After performing Breadth First Traversal on the Tree"<<endl;
    BreadthFirstTraversal(root);
    cout<<endl;
    cout<<"The size of the tree is = "<<size(root)<<endl;
    cout<<"The number of leaf nodes in the tree are = "<<countLeafNodes(root)<<endl;
    cout<<"The maximum depth of the Tree is = "<<maxDepth(root)<<endl;
    return 0;
}