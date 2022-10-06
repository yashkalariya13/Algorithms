#include <iostream>
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
void PosNegNodes(TreeNode* root){
    if(root==NULL){
        return;
    }
    if(root->child1->data>0){
        cout<<"1st Node is positive"<<endl;
    }else{
        cout<<"1st Node is negative"<<endl;
    }
    if(root->child2->data>0){
        cout<<"2nd Node is positive"<<endl;
    }else{
        cout<<"2nd Node is negative"<<endl;
    }
    if(root->child3->data>0){
        cout<<"3rd Node is positive"<<endl;
    }else{
        cout<<"3rd Node is negative"<<endl;
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(-67);
    root->child2=newTreeNode(54);
    root->child3=newTreeNode(-34);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<endl;
    PosNegNodes(root);
    return 0;
}