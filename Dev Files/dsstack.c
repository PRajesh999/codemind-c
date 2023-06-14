#include <stdio.h>
int stack[100],top = -1,size;
void push(int ele)
{
	if(top==size-1)
	{
		printf("Stack is full.Insertions are not possible\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d is inserted into the stack\n",ele);
	}
}
int pop()
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		int rm=stack[top];
		top--;
		return rm;
	}
}
void peek()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Element at top is : %d\n", stack[top]);
	}
}
void display()
{
	if(top == -1)
	{
		printf("Stack is empty.No elements to display\n");
	}
	else
	{
		int i;
		printf("Elements in the stack are\n");
		for (i=top;i>=0;i--)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("Enter size of the stack : ");
	scanf("%d",&size);
	//menu driven program 
	
	while(1)
	{
		int choice;
		printf("Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit ");
		scanf("%d",&choice);
		if(choice==1)
		{
			//push() operation
			int ele;
			printf("Enter an element to be pushed into the stack\n");
			scanf("%d",&ele);
			push(ele);
		}
		else if (choice==2)
		{
			//pop() operation
			int removed_element = pop();
			if(removed_element == -1)
			{
				printf("Stack is empty,cannot delete the element\n");
			}
			else
			{
				printf("Removed element is : %d\n", removed_element);
			}
		}
		else if (choice==3)
		{
			//peek() operation
			peek();
		}
		else if (choice==4)
		{
			//display() operation 
			display();
		}
		else
		{
			printf("Thank you");
			break;
		}
	}	
}


//Enter size of the stack : 5
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//100
//100 is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//200
//200 is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//300
//300 is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//400
//400 is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//500
//500 is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 4
//Elements in the stack are
//500 400 300 200 100
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 2
//Removed element is : 500
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 3
//Element at top is : 400
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 4
//Elements in the stack are
//400 300 200 100
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 2
//Removed element is : 400
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 3
//Element at top is : 300
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 4
//Elements in the stack are
//300 200 100
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit

