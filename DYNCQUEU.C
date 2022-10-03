#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
	int info;
	struct node *next;
}*rear=NULL,*front=NULL;
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("\n1.Insert item");
		printf("\n2.Delete item");
		printf("\n3.Display");
		printf("\n4.Quit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_item();
				break;
			case 2:
				del_item();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("\n Wrong choice Try again");
		}
	}
}
insert_item()
{
	struct node *temp;
	int item;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter item to be inserted in the queue= ");
	scanf("%d",&item);
	temp->info=item;
	if(front==NULL)
		front=temp;
	else
	{
		temp->next=front;
		rear->next=temp;
	}
	rear=temp;
}
del_item()
{
	struct node *temp;
	if(front==NULL)
		printf("\n Queue underflow");
	else
	{
		temp=front;
		printf("\nElement after deletion is=%d",temp->info);
		front=front->next;
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		free(temp);
	}
}
display()
{
	struct node *trav;
	if(front==NULL)
		printf("\n Cqueue is empty");
	else
	{
		printf("\n contents of queue are= ");
		for(trav=front;trav->next!=rear->next;trav=trav->next)
		{
			printf("%d",trav->info);
		}
		printf("%d",rear->info);
	}
}