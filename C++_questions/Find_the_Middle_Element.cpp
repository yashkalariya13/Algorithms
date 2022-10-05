// Complete the printMidElement function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

void printMidElement(SinglyLinkedListNode *head)
{
//write your code here
    SinglyLinkedListNode* fast = head;
    SinglyLinkedListNode* slow = head;
    if(head!=NULL){
      while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
      }
      cout<<slow->data<<endl;
    }
}

