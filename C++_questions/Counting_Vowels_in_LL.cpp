#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    char data;
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

int countVowels(struct Node* head){
    int count = 0;
    Node* current = head;
    while(current!=NULL){
        if((current->data == 'a') || (current->data == 'e') || (current->data == 'i') || (current->data == 'o') || (current->data == 'u')){
            count++;
        }
        current = current->next;
    }
    return count;
}
int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 'a';
    head->next = second;
    
    second->data = 'b';
    second->next = third;
    
    third->data = 'c';
    third->next = fourth;
    
    fourth->data = 'd';
    fourth->next = fifth;
    
    fifth->data = 'e';
    fifth->next = NULL;
    
    cout<<"The Linked-List is"<<endl;
    LinkedListTraversal(head);
    
    cout<<endl;
    
    cout<<"The number of Vowels in the Linked-List are = "<<countVowels(head);
    return 0;
}
