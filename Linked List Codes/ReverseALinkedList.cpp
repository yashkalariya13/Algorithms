#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
struct Node* reverse(struct Node* head){
    Node* current=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(current!=NULL){
        next=current->next;      //storing the next
        current->next=prev;      //switching the value of next and prev
        prev=current;
        current=next;
    }
    head=prev;
    return prev;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    head=reverse(head);
    cout<<"The reversed Linked List is"<<endl;
    LinkedListTraversal(head);
    return 0;
}
