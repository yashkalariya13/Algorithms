#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* child1;
    TreeNode* child2;
    TreeNode* child3;
};

bool isPrime(int n){
    int divisor=2;
    while(divisor<=n-1){
        if(n%divisor==0){
            return false;
        }
        divisor++;
    }
    return true;
}

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
    root->child1=newTreeNode(43);
    root->child2=newTreeNode(21);
    root->child3=newTreeNode(17);
    cout<<"The Root Node is "<<root->data<<endl;
    cout<<"Child 1 of Root Node is "<<root->child1->data<<endl;
    cout<<"Child 2 of Root Node is "<<root->child2->data<<endl;
    cout<<"Child 3 of Root Node is "<<root->child3->data<<endl;
    cout<<endl;
    
    if(isPrime(root->child1->data)){
        cout<<"The 1st Node is Prime"<<endl;
    }else{
        cout<<"The 1st Node is Composite"<<endl;
    }
    
    if(isPrime(root->child2->data)){
        cout<<"The 2nd Node is Prime"<<endl;
    }else{
        cout<<"The 2nd Node is Composite"<<endl;
    }
    
    if(isPrime(root->child3->data)){
        cout<<"The 3rd Node is Prime"<<endl;
    }else{
        cout<<"The 3rd Node is Composite"<<endl;
    }
    return 0;
}