// Complete the palindromeLlist function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
bool palindromeLlist(SinglyLinkedListNode *head)
{
//write your code here
    SinglyLinkedListNode* slow=head;
    SinglyLinkedListNode* fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode* cur=slow;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    
    fast=head;
    while(prev!=NULL){
        if(fast->data!=prev->data){
            return false;
        }
        fast=fast->next;
        prev=prev->next;
    }
    return true;
}
