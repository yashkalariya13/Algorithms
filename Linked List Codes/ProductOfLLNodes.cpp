#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"NULL";
    }
}
int multiplyNodes(struct Node* head){
    struct Node* current=head;
    int product=1;
    while(current!=NULL){
        product=product*current->data;
        current=current->next;
    }
    return product;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=2;
    head->next=second;
    second->data=4;
    second->next=third;
    third->data=6;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"The product of Nodes in the Linked List is = "<<multiplyNodes(head)<<endl;
    return 0;
}