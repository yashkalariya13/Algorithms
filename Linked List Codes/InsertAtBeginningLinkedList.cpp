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
//Creating a function to insert a node at the beginning
struct Node* InsertAtFirst(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
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
    //printing the list before insertion
    cout<<"List before insertion"<<endl;
    LinkedListTraversal(head);
    //printing the list after insertion
    cout<<"List after insertion"<<endl;
    //Calling the function to insert the node in the beginning
    head=InsertAtFirst(head,56);
    //Calling the function to print the List
    LinkedListTraversal(head);
    return 0;
}


