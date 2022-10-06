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
void EvenOddNodes(TreeNode* root){
    if(root==NULL){
        return;
    }
    if((root->child1->data)%2==0){
        cout<<"Node 1 is Even"<<endl;
    }else{
        cout<<"Node 1 is Odd"<<endl;
    }
    if((root->child2->data)%2==0){
        cout<<"Node 2 is Even"<<endl;
    }else{
        cout<<"Node 2 is Odd"<<endl;
    }
    if((root->child3->data)%2==0){
        cout<<"Node 3 is Even"<<endl;
    }else{
        cout<<"Node 3 is Odd"<<endl;
    }
}
int main()
{
    TreeNode* root=newTreeNode(0);
    root->child1=newTreeNode(23);
    root->child2=newTreeNode(44);
    root->child3=newTreeNode(35);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<endl;
    EvenOddNodes(root);
    return 0;
}