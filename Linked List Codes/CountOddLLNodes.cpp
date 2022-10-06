#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
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
int countOdd(struct Node* head){
    struct Node* current=head;
    int oddCount=0;
    while(current!=NULL){
        if((current->data)%2!=0){
            oddCount++;
        }
        current=current->next;
    }
    return oddCount;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=2;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=11;
    fourth->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"The number of Odd Nodes in the Linked List is = "<<countOdd(head)<<endl;
    return 0;
}