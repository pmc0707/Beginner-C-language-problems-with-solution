#include<stdio.h>
int main()
{
	int n,originalnum,a,result=0,temp;
	printf("enter the value of n");
	scanf("%d",&n);
     temp=n;
	while(n!=0)
	{
		a=n%10;
		result+=(a*a*a);
		n/=10;
		}
		if(result==temp)
		{
			printf("armstrong number");
		}
		else
		printf("not armstrong number");
	return 0;
}
