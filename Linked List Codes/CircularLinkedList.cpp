#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
//Creating a function to print the Circular Linked List
void LinkedListTraversal(struct Node* head){
    struct Node* ptr=head;
    do{
        cout<<"Element :"<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=head);
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
    third->next=head;    //***Important
    //Printing the Circular Linked List
    cout<<"The Circular Linked List is"<<endl;
    LinkedListTraversal(head);
    return 0;
}


