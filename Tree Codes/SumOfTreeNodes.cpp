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
int sumOfNodes(TreeNode* root){
    int sum=0;
    if(root==NULL){
        return 0;
    }
    sum=sum+root->child1->data+root->child2->data+root->child3->data;
    return sum;
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(23);
    root->child2=newTreeNode(15);
    root->child3=newTreeNode(30);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<"The Sum of nodes in the Tree are = "<<sumOfNodes(root)<<endl;
    return 0;
}