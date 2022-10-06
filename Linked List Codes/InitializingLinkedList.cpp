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
int main()
{
    //Allocating memory for nodes in the Heap
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    //Linking the first and second nodes
    head->data=7;
    head->next=second;
    //Linking the second and third nodes
    second->data=11;
    second->next=third;
    //Terminating the list at the third node
    third->data=18;
    third->next=NULL;
    //Calling the function to print the list
    LinkedListTraversal(head);
    return 0;
}

