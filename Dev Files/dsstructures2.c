#include <stdio.h>
struct student
	{
		char roll[20];
		char name[20];
		int age;
		float cgpa;
	};
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	struct student s1,s2;
	struct student *s1_ptr, *s2_ptr;
	s1_ptr=&s1;
	s2_ptr=&s2;
	scanf("%s",s1_ptr->roll);
	scanf("%s",s1_ptr->name);
	scanf("%d",&s1_ptr->age);
	scanf("%f",&s1_ptr->cgpa);
	scanf("%s",s2_ptr->roll);
	scanf("%s",s2_ptr->name);
	scanf("%d",&s2_ptr->age);
	scanf("%f",&s2_ptr->cgpa);
	printf("%s %s %d %.2f\n",s1_ptr->roll,s1_ptr->name,s1_ptr->age,s1_ptr->cgpa);
	printf("%s %s %d %.2f",s2_ptr->roll,s2_ptr->name,s2_ptr->age,s2_ptr->cgpa);
}
