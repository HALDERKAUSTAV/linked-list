#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* head;
struct node* last;
void create();
void display();
int main()
{
	int choice,c;
	while(1)
	{
		printf("\nPress 1 to create/Append Linked List :");
		printf("\nPress 2 to Display Linked List :");
		printf("\nPress 3 to Extit Linked List :");
		
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create();
				break;
		    case 2:
		    	display();
		    	break;
		    case 3:
			    exit(0);
			default:
			printf("\n:::Invalid Choice:::");    
				
		}
	}
}
void create(int value)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
	head=temp; //When No node present in the Linked List
	last=temp;
	}
	else
	{
	last->next=temp;
	last=temp;
	}
}

void display()
{
	struct node* t;
	t=head;
	while(t !=NULL)
	{
		printf("%d->",t->data);
		t=t->next;
	}
}
