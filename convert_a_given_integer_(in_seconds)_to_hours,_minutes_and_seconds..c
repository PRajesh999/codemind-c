#include <stdio.h>
int main() 
{
	int sec,H,M,S;
	scanf("%d",&sec);
	H = (sec/3600); 
	M= (sec -(3600*H))/60;
	S = (sec -(3600*H)-(M*60));
	printf("H:M:S-%d:%d:%d
",H,M,S);
}