#include <stdio.h>
int main()
{
	float u,x=0,c;
	scanf("%f",&u);
	if(u<200)
	{
		c=u*1.20;
		printf("Units Consumed: %.f\n",u);
		printf("Cost per Unit: 1.20\n");
		printf("Bill: %.2f\n",c);
	}
	else if(u>=200&&u<400)
	{
		c=u*1.40;
		printf("Units Consumed: %.f\n",u);
		printf("Cost per Unit: 1.40\n");
		printf("Bill: %.2f\n",c);
	}
	else if(u>=400&&u<600)
	{
		c=u*1.60;
		printf("Units Consumed: %.f\n",u);
		printf("Cost per Unit: 1.60\n");
		printf("Bill: %.2f\n",c);
	}
	else if(u>=600&&u<800)
	{
		c=u*1.80;
		printf("Units Consumed: %.f\n",u);
		printf("Cost per Unit: 1.80\n");
		printf("Bill: %.2f\n",c);
	}
	else if(u>=800)
	{
		c=u*2.00;
		printf("Units Consumed: %.f\n",u);
		printf("Cost per Unit: 2.00\n");
		printf("Bill: %.2f\n",c);
	}
	if(c>400)
	{
		x=0.15*c;
		
		printf("Surcharge: %.2f\n",x);
	}
	else
	{
		printf("Surcharge: 0.00\n");
	}
	printf("Total Amount: %.2f",c+x);
}
