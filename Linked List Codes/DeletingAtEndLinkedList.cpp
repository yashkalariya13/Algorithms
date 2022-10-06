#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void LinkedListTraverse(struct Node* ptr){
    while(ptr!=NULL){
        cout<<"Element :"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
//Creating a function to delete a node at the end of the List
struct Node* DeleteAtLast(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=18;
    third->next=NULL;
    cout<<"Linked List is"<<endl;
    LinkedListTraverse(head);
    cout<<"Updated Linked List is"<<endl;
    head=DeleteAtLast(head);
    LinkedListTraverse(head);
    return 0;
}

