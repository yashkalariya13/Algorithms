#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    int flag;
};
void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"NULL";
    }
}
bool detectLoop(struct Node* h)
{
    while (h != NULL) {
        // If this node is already traversed
        // it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (h->flag == 1)
            return true;
 
        // If we are seeing the node for
        // the first time, mark its flag as 1
        h->flag = 1;
 
        h = h->next;
    }
 
    return false;
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
    cout<<endl;
    
    if (detectLoop(head)){
        cout << "Loop found";
    }
    else{
        cout << "No Loop";
    }
    return 0;
}


