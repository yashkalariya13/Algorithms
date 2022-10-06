// Complete the reverseLinkedList function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *reverseLinkedList(SinglyLinkedListNode *head)
{
//write your code here
   SinglyLinkedListNode* current = head;
   SinglyLinkedListNode* prev = NULL;
   SinglyLinkedListNode* next = NULL;
   while(current!=NULL){
     next = current->next;
     current->next = prev;
     prev = current;
     current = next;
   }
   head = prev;
   return prev;
}
