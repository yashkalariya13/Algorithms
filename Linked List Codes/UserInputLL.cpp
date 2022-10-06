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
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    int a;
    cout<<"Enter the 1st Node of the Linked List"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the 2nd Node of the Linked List"<<endl;
    cin>>b;
    int c;
    cout<<"Enter the 3rd Node of the Linked List"<<endl;
    cin>>c;
    head->data=a;
    head->next=second;
    second->data=b;
    second->next=third;
    third->data=c;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    return 0;
}