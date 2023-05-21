#include<stdio.h>
main()
{
	int n,sum=0,temp;
	printf("enter the  value of n");
	scanf("%d",&n);
	do{
	  	temp=n%10;
	  	sum=sum + temp;
	  	n=n/10;
	}
	while(n>0);
printf("%d",sum);
	
}
