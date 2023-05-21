#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter the value of n");
	 scanf("%d",&n);
	 for(;n!=0;n=n/10)
	 {
	 	r=n%10;
	 	sum= sum*10 +r;
	 }
	 printf("sum=%d",sum);
}

