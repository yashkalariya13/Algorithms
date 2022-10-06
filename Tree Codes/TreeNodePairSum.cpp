#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
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
void returnPairSum(TreeNode* root,int n){
    if(root==NULL){
        return;
    }
    if(root->child1->data+root->child2->data==n){
        cout<<"The sum of pair "<<root->child1->data<<" & "<<root->child2->data<<" equal "<<n<<endl;
    }
    if(root->child2->data+root->child3->data==n){
        cout<<"The sum of pair "<<root->child2->data<<" & "<<root->child3->data<<" equal "<<n<<endl;
    }
    if(root->child3->data+root->child1->data==n){
        cout<<"The sum of pair "<<root->child3->data<<" & "<<root->child1->data<<" equal "<<n<<endl;
    }
    else{
        cout<<"No pair of nodes in the Tree equal the value of sum"<<endl;
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(10);
    root->child2=newTreeNode(25);
    root->child3=newTreeNode(32);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<endl;
    int sum;
    cout<<"Enter the value of sum you want to check"<<endl;
    cin>>sum;
    returnPairSum(root,sum);
    return 0;
}