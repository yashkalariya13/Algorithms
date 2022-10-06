#include <iostream>
#include <bits/stdc++.h>
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
int count(struct Node* head,int search_for){
    Node* current=head;
    int count=0;
    while(current!=NULL){
        if(current->data==search_for){
            count++;
        }
        current=current->next;
    }
    return count;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=30;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    int n;
    cout<<"Enter the element you want to find the count of"<<endl;
    cin>>n;
    cout<<"The count of "<<n<<" is = "<<count(head,n)<<endl;
    return 0;
}