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
int minimumNode(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    if(root->child1->data<=root->child2->data && root->child1->data<=root->child3->data){
        return root->child1->data;
    }
    if(root->child2->data<=root->child1->data && root->child2->data<=root->child3->data){
        return root->child2->data;
    }
    if(root->child3->data<=root->child1->data && root->child3->data<=root->child2->data){
        return root->child3->data;
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(21);
    root->child2=newTreeNode(52);
    root->child3=newTreeNode(13);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<endl;
    cout<<"The minimum node in the Tree is = "<<minimumNode(root)<<endl;
    return 0;
}