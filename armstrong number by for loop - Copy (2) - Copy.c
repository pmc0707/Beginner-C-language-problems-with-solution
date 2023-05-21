#include<stdio.h>
main()
{
	int n,temp,r,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	 for(temp=n;n!=0;n=n/10)
	 {
	 	r=n%10;
	 	sum=sum +(r*r*r);
     }
     
	 if(sum==temp)
	 {
	 	printf("armstrong number=%d",temp);
	 }
	 else
	 {
	 	printf("not armstrorng number");
	 }
}
