#include <stdio.h>
char stack[100],top = -1,size;
void push(char ele)
{
	if(top==size-1)
	{
		printf("Stack is full.Insertions are not possible\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%c is inserted into the stack\n",ele);
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
		char rm=stack[top];
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
		printf("Element at top is : %c\n", stack[top]);
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
			printf("%c ",stack[i]);
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
			scanf(" %c",&ele);
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
				printf("Removed element is : %c\n", removed_element);
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

//Enter size of the stack : 6
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//h
//h is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//s
//s is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//e
//e is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//j
//j is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//a
//a is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 1
//Enter an element to be pushed into the stack
//r
//r is inserted into the stack
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 4
//Elements in the stack are
//r a j e s h
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 3
//Element at top is : r
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 2
//Removed element is : r
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 3
//Element at top is : a
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 4
//Elements in the stack are
//a j e s h
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 2
//Removed element is : a
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 3
//Element at top is : j
//Enter  1.Push 2.Pop 3.Peek 4.Display any other to exit 4
//Elements in the stack are
//j e s h
