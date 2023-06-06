#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
int main()
{
	NODE *n1=(NODE *)malloc(sizeof(NODE));
	NODE *n2=(NODE *)malloc(sizeof(NODE));
	NODE *n3=(NODE *)malloc(sizeof(NODE));
	NODE *n4=(NODE *)malloc(sizeof(NODE));
	//data
	n1->data=10;
	n2->data=20;
	n3->data=30;
	n4->data=40;
	//next connections
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	//previous connections
	n1->prev=NULL;
	n2->prev=n1;
	n3->prev=n2;
	n4->prev=n3;
	printf("%d %d %d %d\n",n1->data,n1->next->data,n1->next->next->data,n1->next->next->next->data);
	printf("%d %d %d %d",n4->data,n4->prev->data,n4->prev->prev->data,n4->prev->prev->prev->data);
	
}
