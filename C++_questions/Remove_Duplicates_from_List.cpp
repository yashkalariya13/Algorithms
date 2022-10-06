// Complete the removeDuplicates function below.

/*
* For your reference:
*
* SinglyLinkedListNode {
*     int data;
*     SinglyLinkedListNode* next;
* };

To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*
*/
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
//write your code here
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* next_next;
    while(current->next!=NULL){
        if(current->data == current->next->data){
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }else{
            current = current->next;
        }
    }
    return head;
}

