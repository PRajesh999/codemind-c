/*Relation between arrays and pointers
Array name itself acts as a pointer 
it points to first element of the array */

#include <stdio.h>
int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	//          100 104 108 112 116
	printf("%d %d", a, a+1);    //a-->address of first element
	printf("\n%d %d", *a, *(a+1));
	//pointer arithmetic

}
