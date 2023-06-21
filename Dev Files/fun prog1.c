#include <stdio.h>
char grade(int marks)
{
if(marks >=90) return 'A';
else if	(marks >=80 && marks <90) return 'B';
else if	(marks >=70 && marks <80) return 'C';
else if	(marks >=60 && marks <70) return 'D';
else return 'E';
}
int main()
{
int st1=75 , st2=45, st3=98;
printf("%c\n",grade(st1));
printf("%c\n",grade(st2));
printf("%c\n",grade(st3));
}


