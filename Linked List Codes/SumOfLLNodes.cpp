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
int addNodes(struct Node* head){
    struct Node* current=head;
    int sum=0;
    while(current!=NULL){
        sum=sum+current->data;
        current=current->next;
    }
    return sum;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=21;
    head->next=second;
    second->data=15;
    second->next=third;
    third->data=35;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"The sum of Nodes in the Linked List is = "<<addNodes(head)<<endl;
    return 0;
}