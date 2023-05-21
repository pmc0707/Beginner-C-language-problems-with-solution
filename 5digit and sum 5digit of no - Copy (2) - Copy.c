#include<stdio.h>
main()
{
	int n, a,sum=0; 
	printf("rnter the value of n");
	scanf("%d",&n);
	for(;n!=0;n=n/10)
	{
		a=n%10;
		sum= sum +a;
	}
	printf("sum=%d",sum);
}
