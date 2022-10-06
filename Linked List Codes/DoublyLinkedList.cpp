#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
void display(struct Node* ptr){
    struct Node* last;
    while(ptr!=NULL){
        cout<<ptr->data<<"<==>";
        last=ptr;
        ptr=ptr->next;
    }
    if(ptr==NULL)
        cout<<"NULL";
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    head->prev=NULL;
    second->data=11;
    second->next=third;
    second->prev=head;
    third->data=18;
    third->next=NULL;
    third->prev=second;
    cout<<"The Doubly Linked List is"<<endl;
    display(head);
    return 0;
}

