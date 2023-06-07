#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;

void display(NODE *head) {
	// implement display here
	NODE *temp = head;
	while(temp!=NULL) {
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}

int main() {
	// create a node
	NODE *node1 = (NODE *)malloc(sizeof(NODE));
	NODE *node2 = (NODE *)malloc(sizeof(NODE));         		 
	NODE *node3 = (NODE *)malloc(sizeof(NODE));
	NODE *node4 = (NODE *)malloc(sizeof(NODE));
	NODE *node5 = (NODE *)malloc(sizeof(NODE));
	NODE *node6 = (NODE *)malloc(sizeof(NODE));
	node1 -> data = 10;
	node2 -> data = 20;
	node3 -> data = 30;
	node4 -> data = 40;
	node5 -> data = 50;
	node6 -> data = 60;
//	printf("%d %d %d", node1->data, node2->data, node3->data);
	// Linking nodes togehter
	node1 -> next = node2; // linking node1 and node2
	node2 -> next = node3; // linking node2 and node3
	node3 -> next = node4; // linking node3 and node4
	node4 -> next = node5; // linking node4 to node5;
	node5 -> next = node6; // linking node5 and node6;
	node6 -> next = NULL; // setting node6 next part to NULL
	
	// creating a head that points to head node
	NODE *head = node1;
	// printing all the elements of a linked list;
	display(head);
}
