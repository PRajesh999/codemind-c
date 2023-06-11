
#include <stdio.h>
int main()
{
	int a[5] = {10,20,30,40,50};
	int *ptr = a;
	for(ptr = a; ptr <= a+4; ptr++)    //a+4 means an integer occupies 4 bytes....so a=first a+1=a+1*4=a+4=second...and so on..
	{                                  //	for(; ptr <= a+4; ptr++) we can use this also
		printf("%d ", *ptr);
	}
	
}

/*Reverse order
#include <stdio.h>
int main()
{
	int a[5] = {10,20,30,40,50};
	int *ptr = a;
	for(ptr = a+4; ptr >= a; ptr--)      //	for(ptr = a+4; ptr >= a; ptr--) we can use this also 
	{
		printf("%d ", *ptr);
	}
} */


