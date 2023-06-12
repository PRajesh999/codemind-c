//Polynomial representation using linked lists and sorting using exponents in descending order
#include<stdio.h>
#include<stdlib.h>
struct node
{
	float coeff;
	int expo;
	struct node *next;
};
typedef struct node NODE;
NODE *insert_a_term(NODE *head,float co,int ex)
{
	NODE *new_term=(NODE *)malloc(sizeof(NODE));
	new_term->coeff=co;
	new_term->expo=ex;
	new_term->next=NULL;
	if(head==NULL || ex>head->expo)
	{
		new_term->next=head;
		head=new_term;
	}
	else
	{
		NODE *temp=head;
		while(temp->next!=NULL && temp->next->expo>ex)
		{
			temp=temp->next;
		}
		new_term->next=temp->next;
		temp->next=new_term;
	}
	return head;
}
NODE *create_polynomial()
{
	NODE *head=NULL;
	int n,i;
	printf("Enter no. of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		float co;
		int ex;
		printf("Enter coeff of term %d: ",i);
		scanf("%f",&co);
		printf("Enter expo of term %d: ",i);
		scanf("%d",&ex);
		head=insert_a_term(head,co,ex);
	}
	return head;
}
void display_polynomial(NODE *head)
{
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("(%.1fx^%d)",temp->coeff,temp->expo);
		if(temp->next!=NULL)
		{
			printf(" + ");
		}
		else
		{
			printf("\n");
		}
		temp=temp->next;
	}
}
int main()
{
	printf("Polynomial:\n");
	NODE *poly=create_polynomial();
	display_polynomial(poly);
}
