#include<iostream>
#include<climits>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};
struct info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};
info largestBST(node* root){
    if(root == NULL){
        return {0,INT_MIN,INT_MAX,0,true}; //directly typecasting the value in structure info
    }
    if(root->left == NULL && root->right == NULL){
        return {1,root->data,root->data,1,true}; //for leaf node
    }

    info leftInfo = largestBST(root->left); //calling for left subtree
    info rightInfo = largestBST(root->right); //calling for right subtree

    info curr;
    curr.size = (1+leftInfo.size+rightInfo.size);
    //if left and right subtree are bst then only check for current node, otherwise it's meaningless

    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data){
        curr.min = min(leftInfo.min,min(rightInfo.min,root->data));
        curr.max = max(rightInfo.max,max(leftInfo.max,root->data));
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }
    curr.ans = max(leftInfo.ans,rightInfo.ans);
    curr.isBST = false;
    return curr;


}

int main(){
    /*
         5
        / \
       3   6
      / \
     2   4
    */
    node* root = new node(5);
    root->left =new node(3);
    //root->left->left =new node(2);
    root->left->right =new node(4);
    root->right = new node(6);
    cout<<"largest bst size : "<<largestBST(root).ans<<endl;
    return 0;
}