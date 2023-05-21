#include<stdio.h>
main()
{
	int i,n,c=0;
	printf("enter the value of n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime number ");
	}
	getch (); 
}
