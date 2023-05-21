#include<stdio.h>
main()
{
	int n,r,sum=0 ,temp;
	printf("enter the value of n ");
	scanf("%d",&n);
	temp==n;
	 for(temp=n;n!=0;n=n/10)
	 {
	 	r=n%10;
	 	sum= sum*10+r;
	 }

	 if(temp==sum)
	 {
	 	printf("palindrome number=%d",temp);
	 }
	 else
	 {
	 	printf("not palindrome number =%d",temp);
	 }
}
