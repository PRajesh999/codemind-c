#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int freq[101]={};
	int flag=0;
	for(i=0;i<n;i++)
	{
	    freq[a[i]]++;
	}
	for(i=1;i<101;i++)
	{
	    if(freq[i]==i)
	    {
	        flag=1;
	        printf("%d ",i);
	        break;
	    }
	}
	for(i=101;i>0;i--)
	{
	    if(freq[i]==i)
	    {
	        flag=1;
	        printf("%d ",i);
	        break;
	    }
	}
	if(flag==0){
	    printf("-1");
	}
}