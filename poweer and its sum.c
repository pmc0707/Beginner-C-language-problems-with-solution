#include<stdio.h>
main()
{
	int x,sum=0, n, i=1;
	printf("enter the value of x and n");
	scanf("%d%d",&x,&n);
	do
	{
		sum=sum+pow(x,i)/i;
		i++;
	}
	while(i<=n);
	printf("sum=%d",sum);
}
