#include <iostream>
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
    return(treenode);
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
int main()
{
    TreeNode* root=newTreeNode(0);
    root->left_child=newTreeNode(1);
    root->right_child=newTreeNode(2);
    root->left_child->left_child=newTreeNode(11);
    root->left_child->right_child=newTreeNode(12);
    root->right_child->left_child=newTreeNode(21);
    root->right_child->right_child=newTreeNode(22);
    cout<<"After performing Breadth First Traversal on the Tree"<<endl;
    BreadthFirstTraversal(root);
    cout<<endl;
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"The children of Root Node are "<<root->left_child->data<<" & "<<root->right_child->data<<endl;
    cout<<"The children of Left Child are "<<root->left_child->left_child->data<<" & "<<root->left_child->right_child->data<<endl;
    cout<<"The children of Right Child are "<<root->right_child->left_child->data<<" & "<<root->right_child->right_child->data<<endl;
    cout<<"The external leaf nodes are "<<root->left_child->left_child->data<<" , "<<root->left_child->right_child->data<<" , "<<root->right_child->left_child->data<<" & "<<root->right_child->right_child->data<<endl;
    cout<<"The ancestor of leaf nodes is "<<root->data<<endl;
    return 0;
}