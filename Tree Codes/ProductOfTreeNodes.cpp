#include <iostream>
#include <bits/stdc++.h>
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
int product(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int product=1;
    product=product*root->data*root->child1->data*root->child2->data*root->child3->data;
    return product;
}
int main()
{
    TreeNode* root=newTreeNode(3);
    root->child1=newTreeNode(2);
    root->child2=newTreeNode(6);
    root->child3=newTreeNode(5);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<"The product of Tree Nodes is = "<<product(root)<<endl;
    return 0;
}
