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
	struct student s1,s2;
	scanf("%s",s1.roll);
	scanf("%s",s1.name);
	scanf("%d",&s1.age);
	scanf("%f",&s1.cgpa);
	scanf("%s",s2.roll);
	scanf("%s",s2.name);
	scanf("%d",&s2.age);
	scanf("%f",&s2.cgpa);
	printf("%s %s %d %.2f\n",s1.roll,s1.name,s1.age,s1.cgpa);
	printf("%s %s %d %.2f",s2.roll,s2.name,s2.age,s2.cgpa);
}
