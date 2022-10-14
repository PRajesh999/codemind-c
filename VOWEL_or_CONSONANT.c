#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("VOWEL");
    }
    else
    {
    printf("CONSONANT");
    }
    return 0;
}