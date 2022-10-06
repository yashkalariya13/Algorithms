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
void removeDuplicates(struct Node* head){
    struct Node* current=head;
    struct Node* next_next;      //pointer to store next pointer of node to be deleted
    while(current->next!=NULL){
        if(current->data==current->next->data){
            next_next=current->next->next;        //increment next_next
            free(current->next);                 //delete the repeating node
            current->next=next_next;            
        }
        else{
        current=current->next;                  //keep moving if no duplicates
        }
    }
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
    third->data=20;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"After removing Duplicates, the Linked List is"<<endl;
    removeDuplicates(head);
    LinkedListTraversal(head);
    return 0;
}