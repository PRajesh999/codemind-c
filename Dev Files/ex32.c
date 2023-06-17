//WAP TO COMPUTE AREA OF VARIOUS SHAPES

#include <stdio.h>
int main()
{
	int shape;
	int l,b,s,r;
	float area;
	scanf("%d",&shape);
	switch(shape)
	{
		case 1 : scanf("%d",&s);
		         area=s*s;	
		         printf("%.2f",area);
		         break;
		         
		case 2 : scanf("%d %d",&l,&b);
		         area=l*b;	
		         printf("%.2f",area);
				 break;         
		case 3 : scanf("%d %d",&l,&b);
				 area=0.5*l*b;	
		         printf("%.2f",area);
		         break;
	
	   case 4 :  scanf("%d",&r);
				 area=3.14*r*r;	
		         printf("%.2f",area);
		         break;
		         
		default : printf("Don't choose anything");
}

	
	
}
