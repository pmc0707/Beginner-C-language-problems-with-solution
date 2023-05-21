#include<stdio.h>
main()
{
	int i=1, sum=0,n,fact=1;
	printf("enter teh value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	
	}
	printf("fact=%d",fact);
}
