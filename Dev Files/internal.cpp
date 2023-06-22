#include<stdio.h>
#include<stdlib.h>
struct t_node{
	int data;
	struct t_node *left;
	struct t_node *right;
};
typedef struct t_node TreeNode;

//creating a function that creates a tree node & puts value in it.

TreeNode* create_tree_node(int val){
	TreeNode *nn = (TreeNode*)malloc(sizeof(TreeNode));
	nn -> data = val;
	nn -> left = NULL;
	nn -> right = NULL;
	return nn; 
}

Construct_Binary_Tree(int* arr,int* n){
	TreeNode *q[1000];
	int front,rear;
	front = rear = 0;
	q [rear++] = create_tree_node(arr[0]);
	int i = 0;
	while(1){
		if (2 * i + 1 >= n){
			break;
		}
		if (2 * i + 1 < n){
			TreeNode *t = create_tree_node(arr[2 * i + 2]);
			q[rear++] = t;
			q[front] -> left = t;// connecting the left child	
		}
		if (2 * i + 2 < n){
			TreeNode *t = create_tree_node(arr[2 * i + 2]);
			q[rear++] = t;
			q[front] -> right = t; // connecting the right child
		}
		front++;
		i++;
	}
	return q[0]; // root of the constructed binary tree
}

void pre_order(TreeNode *root)
{
	if (root != NULL)
	{
		printf("%d ",root -> data);
		pre_order(root -> left);
		pre_order(root -> right);
	}
}

void in_order(TreeNode *root)
{
	if (root != NULL)
	{
		in_order(root -> left);
		printf("%d ",root -> data);
		in_order(root -> right);
	}
}

void post_order(TreeNode *root)
{
	if (root != NULL)
	{
		post_order(root -> left);
		post_order(root -> right);
		printf("%d ",root -> data);
	}
}


int main(){
	int n;
	printf("Enter the size of the Array :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the size of the Array :-\n");
	for (int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	// checking the tree
	TreeNode *root = Construct_Binary_Tree(arr,n);
	printf("\n");
	pre_order(root);
	printf("\n");
	in_order(root);
	printf("\n");
	post_order(root);

}














