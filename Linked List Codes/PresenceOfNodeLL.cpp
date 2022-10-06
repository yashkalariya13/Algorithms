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
void checkNode(struct Node* head,int element){
    struct Node* current=head;
        while(current!=NULL){
        if(current->data==element){
            cout<<element<<" is present here"<<endl;
        }else{
            cout<<element<<" is not present here"<<endl;
        }
        current=current->next;
        }
}

int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=23;
    head->next=second;
    second->data=56;
    second->next=third;
    third->data=42;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    int n;
    cout<<"Enter the element you want to search in the Linked List"<<endl;
    cin>>n;
    checkNode(head,n);
    return 0;
}