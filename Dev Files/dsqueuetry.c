#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node *next;	
}; 

typedef struct node NODE;
NODE *head=NULL;
int c=0,max_size;

void insert_at_end(NODE *nn)
{
	if(c==max_size)
	{
		printf("Queue is full\n");
	}
	else if(head==NULL)
	{
		head=nn;
		c++;
	}
	else
	{
		NODE *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;
		c++; //inserting new node at tail
	}
}

void delete_at_head()
{
	if(c==0)
	{
		printf("Queue is Empty\n");
		return;
	}
	printf("Deleted Element is %d\n",head->data);
	NODE *dn=head; //storing to be deleted node in dn variable to free
	head=head->next;
	free(dn);
	c--; //deallocating memory
}

void display()
{
	if(c==0)
	{
		printf("Queue is Empty\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
	    temp=temp->next;
	}
	printf("\n");
}

int main()
{
	printf("Enter Maximum Size of Queue : ");
	scanf("%d",&max_size);
	int choice;
	while(1)
	{
		int choice;
		printf("Enter\n 1.Insert at tail\n 2.Delete at Head\n 3.Display and anything else to exit: ");
	    scanf("%d",&choice);
	    if(choice==1)
	    {
	    	//insert_at_end();
	    	int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_end(nn);
	    }
	    else if(choice==2)
		{
			delete_at_head();
		}
		else if(choice==3)
		{
			//display()
			display();
		}
		else
		{
			printf("Thank You");
			break;
		}
    }	    
}-
