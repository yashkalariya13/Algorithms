#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* child1;
    TreeNode* child2;
    TreeNode* child3;
};
TreeNode* newTreeNode(int data){
    TreeNode* treenode=new TreeNode();
    treenode->data=data;
    treenode->child1=NULL;
    treenode->child2=NULL;
    treenode->child3=NULL;
    return(treenode);
}
void BreadthFirstTraversal(TreeNode* root){
    queue<TreeNode*> q;
    TreeNode* temp_tree_node=root;
    while(temp_tree_node){
        cout<<temp_tree_node->data<<" ";
        if(temp_tree_node->child1){
            q.push(temp_tree_node->child1);
        }
        if(temp_tree_node->child2){
            q.push(temp_tree_node->child2);
        }
        if(temp_tree_node->child3){
            q.push(temp_tree_node->child3);
        }
        temp_tree_node=q.front();
        q.pop();
    }
}
int size(TreeNode* root){
    if(root==NULL){
        return 0;
    }if(root->child1==NULL && root->child2==NULL && root->child3==NULL){
        return 1;
    }
    else{
        return(size(root->child1) + size(root->child2) + size(root->child3));       //+1 is for root node
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(1);
    root->child2=newTreeNode(2);
    root->child3=newTreeNode(3);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<endl;
    cout<<"After performing Breadth First Traversal"<<endl;
    BreadthFirstTraversal(root);
    cout<<endl;
    cout<<"The number of leaf nodes in the Tree are = "<<size(root)<<endl;
    return 0;
}