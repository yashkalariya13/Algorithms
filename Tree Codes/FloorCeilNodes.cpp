#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
struct TreeNode{
    float data;
    TreeNode* child1;
    TreeNode* child2;
};
TreeNode* newTreeNode(float data){
    TreeNode* treenode=new TreeNode();
    treenode->data=data;
    treenode->child1=NULL;
    treenode->child2=NULL;
    return(treenode);
}
void floorceilNodes(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<floor(root->child1->data)<<endl;
    cout<<floor(root->child2->data)<<endl;
    cout<<ceil(root->child1->data)<<endl;
    cout<<ceil(root->child2->data)<<endl;
}
int main()
{
    TreeNode* root=newTreeNode(0.0);
    root->child1=newTreeNode(4.4);
    root->child2=newTreeNode(2.7);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<endl;
    cout<<"The floor & ceil values of the nodes are "<<endl;
    floorceilNodes(root);
    return 0;
}