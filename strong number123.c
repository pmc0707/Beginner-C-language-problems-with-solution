#include<stdio.h>
main()
{
	int i, n,temp=' ',digit,sum=0,fact;
	printf("enter the number ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	digit=n%10;
    fact=1;
	for(i=1;i<=digit;i++)
	{
		fact=fact*i;
	}	sum=sum+fact;
		n=n/10;
}
	if(sum == temp)
	{
		printf("strong number");
	}
	else
	{
		printf("not strong number ");
	}
	return 0;

}
