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
//creating a function to insert a node at any index
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
    //printing the list after insertion of the node
    cout<<"List after insertion"<<endl;
    head=insertAtIndex(head,56,2);
    LinkedListTraversal(head);
    return 0;
}

