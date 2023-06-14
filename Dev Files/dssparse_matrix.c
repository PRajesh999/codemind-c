//Sparce matrix representation using linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
	int r;
	int c;
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
void insert_at_tail(NODE *nn)
{
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		NODE *temp=head;
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;
	}
}
void display()
{
	printf("Row\t Col\t Value\n");
	NODE *temp=head;
	while(temp != NULL)
	{
		printf("%d\t %d\t %d\n", temp->r, temp->c, temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int s_mat[4][4]= {{0,0,0,5},
					 {0,6,0,0},
					 {0,0,0,10},
					 {7,0,0,0}};
	int i,j;
	for (i=0;i<4;i++) 
	{
		for (j=0;j<4;j++)
		{
			if(s_mat[i][j] != 0)
			{
	//			printf("%d %d %d",i,j,s_mat[i][j]);
				NODE *nn=(NODE *)malloc(sizeof(NODE)); //creating a node
				nn->r=i;
				nn->c=j;
				nn->data=s_mat[i][j];
				nn->next=NULL;
//				insert the node in linked list
				insert_at_tail(nn);
			}
		}
		//printf("\n");
	}
	display();
}
