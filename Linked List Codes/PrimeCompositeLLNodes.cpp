#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

bool isPrime(struct Node* head,int n){
    int divisor=2;
    while(divisor<=n-1){
        if(n%divisor==0){
            return false;
        }
        divisor++;
    }
    return true;
}

void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"NULL";
    }
}

int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=31;
    head->next=second;
    second->data=44;
    second->next=third;
    third->data=87;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    if(isPrime(head,head->data)){
        cout<<"Head Node is Prime"<<endl;
    }else{
        cout<<"Head Node is Composite"<<endl;
    }
    if(isPrime(head,second->data)){
        cout<<"Second Node is Prime"<<endl;
    }else{
        cout<<"Second Node is Composite"<<endl;
    }
    if(isPrime(head,third->data)){
        cout<<"Third Node is Prime"<<endl;
    }else{
        cout<<"Third Node is Composite"<<endl;
    }
    return 0;
}