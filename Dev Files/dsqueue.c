//implementing queue data structure using arrays
#include<stdio.h>
int queue[100],front=-1,rear=-1,max_size;
void enque(int val)
{
	if(rear==max_size-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;  //or front++;
		rear=0;   //or rear++;
		queue[rear]=val;
	}	else
	{
		queue[++rear]=val;  
	}
}

int deque()
{
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		int de=queue[rear];
		rear=-1;
		front=-1;
		return de;
	}
	else
	{
		int de=queue[front];
		front++;
		return de;
	}
}

void display()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is Empty\n");
		return;
	}
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
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
		printf("Enter\n1. Enque\n2. Deque\n3. Display\nOther to exit : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			//enque()
			int val;
			printf("Enter value: ");
			scanf("%d",&val);
			enque(val); //function call
		}
		else if(choice==2)
		{
			//deque()
			int res=deque();
			if(res==-1)
			{
				printf("Queue is Empty\n");
			}
			else
			{
				printf("%d is Deleted\n",res);
			}
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
}
