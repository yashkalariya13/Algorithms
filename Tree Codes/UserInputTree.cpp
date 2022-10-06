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
int main()
{
    TreeNode* root=newTreeNode(0);
    int a;
    cout<<"Enter the 1st child"<<endl;
    cin>>a;
    root->child1=newTreeNode(a);
    int b;
    cout<<"Enter the 2nd child"<<endl;
    cin>>b;
    root->child2=newTreeNode(b);
    int c;
    cout<<"Enter the 3rd child"<<endl;
    cin>>c;
    root->child3=newTreeNode(c);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    return 0;
}