#include <iostream>
#include <stdlib.h>
#include <stdio.h>
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
    if(ptr==NULL)
    cout<<"NULL";
}
struct Node* DeleteEven(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(p->next!=NULL){
        p=p->next;
        q=q->next;
        if(p->data%2==0){
        p->data=NULL;
    }
    }
    
    return head;
}
int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sixth=(struct Node*)malloc(sizeof(struct Node));
    head->data=23;
    head->next=second;
    second->data=15;
    second->next=third;
    third->data=20;
    third->next=fourth;
    fourth->data=25;
    fourth->next=fifth;
    fifth->data=30;
    fifth->next=sixth;
    sixth->data=36;
    sixth->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"The updated Linked List is"<<endl;
    head=DeleteEven(head);
    LinkedListTraversal(head);
    return 0;
}

