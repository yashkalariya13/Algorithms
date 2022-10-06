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
//creating a function to insert a node at the end of the list
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
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
    cout<<"List before insertion"<<endl;
    LinkedListTraversal(head);
    //printing the list after insertion of node at the end
    cout<<"List after insertion"<<endl;
    head=insertAtEnd(head,56);
    LinkedListTraversal(head);
    return 0;
}


