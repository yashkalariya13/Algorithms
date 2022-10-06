#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<endl;;
        ptr=ptr->next;
    }
}
//Creating a function to delete the first node
struct Node* DeleteAtFirst(struct Node* head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
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
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<"The Linked List after deletion is"<<endl;
    head=DeleteAtFirst(head);
    LinkedListTraversal(head);
    return 0;
}


