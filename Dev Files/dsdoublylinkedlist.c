#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head = NULL;
NODE *tail = NULL;
void insert_at_head(NODE *nn) {
	if (head == NULL && tail == NULL) {
		head = nn;
		tail = nn;
	}
	else {
		head -> prev = nn;
		nn -> next = head;
		head = nn;
	}
}
void insert_at_tail(NODE *nn) {
	if (head == NULL && tail == NULL) {
		head = nn;
		tail = nn;
	}
	else {
		nn -> prev = tail;
		tail -> next = nn;
		tail = nn;
	}
}

void delete_at_head() {
	if (head == NULL && tail == NULL) {
		printf("No Nodes\n");
	}
	else if (head == tail) {
		printf("%d is deleted\n", head -> data);
		head = NULL;
		tail = NULL;
	}
	else{
		printf("%d is deleted\n", head -> data);
		head = head -> next;
		head -> prev = NULL;
	}	
}

void delete_from_tail() {
	if (head == NULL && tail == NULL) {
		printf("No Nodes\n");
	}
	else if (head == tail) {
		//NODE *dn = head;
		printf("%d is deleted\n", head -> data);
		head = NULL;
		tail = NULL;
	}
	else{
		printf("%d is deleted\n", tail -> data);
		tail = tail -> prev;
		tail -> next = NULL;
	}	
}

void display_from_head() {
	if (head == NULL && tail == NULL) {
		printf("No Nodes\n");
		return;
	}
	NODE *temp = head;
	while (temp != NULL) {
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}

void display_from_tail() {
	if (head == NULL && tail == NULL) {
		printf("No Nodes\n");
		return;
	}
	NODE *temp = tail;
	while (temp != NULL) {
		printf("%d ", temp -> data);
		temp = temp -> prev;
	}
	printf("\n");
}
int main() {
	int choice;
	while (1) {
		printf("Enter\n1. Insertion at head\n2. Insertion at tail\n3. Deletion at head\n4. Deletion at tail\n5. Display from head\n6. Display from tail\nand any other to exit: ");
		scanf("%d", &choice);
		if (choice == 1) {
			// insertion_at_head();
			NODE *nn = (NODE *)malloc(sizeof(NODE));
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d", &val);
			nn -> data = val;
			nn -> prev = NULL;
			nn -> next = NULL;
			insert_at_head(nn);
		}
		else if (choice == 2) {
			// insertion_at_tail();
			NODE *nn = (NODE *)malloc(sizeof(NODE));
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d", &val);
			nn -> data = val;
			nn -> prev = NULL;
			nn -> next = NULL;
			insert_at_tail(nn);
		}
		else if (choice == 3) {
			// deletion_at_head();
			delete_at_head();
		}
		else if (choice == 4) {
			// deletion_at_tail();
			delete_from_tail();
		}
		else if (choice == 5) {
			// display_from_head();
			display_from_head();
			
		}
		else if (choice == 6) {
			// display_from_tail();
			display_from_tail();
		}
		else {
			printf("Thank you");
			break;
		}
	}
}
