/*
Write a Program to implement Stack using Linked List.
Function to be included:
--> Push
--> Pop
--> Display
*/

//Including Libraries
#include <stdio.h>
#include <stdlib.h>

//Function Declaration
void push();
void pop();
void disp();

//Creating structure
struct node
{
    int data;
    struct node *frnt;
};
struct node *head;

//Main Function
int main()
{
    int opt;
    while(1)
    {
        printf("\nOperations of Stack using Linked List\n");
        printf("1_Push \n2_Pop \n3_Display \n4_Exit");
        printf("\nEnter the option: ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: disp(); break;
            case 4: exit(0);
            default: printf("\nInvalid Choice\n");
        }
    }
}

//Function Implementation
void push()
{
    int ele;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nMemory Allocation Failed\n");
    }
    else
    {
        printf("\nEnter Element to be inserted at end: ");	
        scanf("%d", &ele);
        ptr->data = ele;									
        if(head == NULL)									
        {
            ptr->frnt = NULL;								
            head = ptr;										
        }
        else												
        {
            ptr->data = ele;
            ptr->frnt = head;
            head = ptr;
        }
    }
}

void pop()
{
    struct node *ptr;					
    if(head == NULL)					
    {
        printf("\nNo Elements There\n");
    }
    else								
    {
        ptr = head;						
        head = ptr->frnt;
        printf("\nElement removed is: %d\n", ptr->data);
        free(ptr);						
    }
}

void disp()
{
    struct node *ptr;  					
    ptr = head;   						
    if(ptr == NULL)  					
    {  
        printf("\nNo Elements There\n"); 
    }  
    else  								
    {  
        printf("\nThe Values are: ");   
        while (ptr!=NULL)  				
        {  
            printf("%d ",ptr->data);  	
            ptr = ptr -> frnt;  		
        }								
        printf("\n");
    }  
}