#include<stdio.h>
int main()
{
	int n,i=1,j;
	printf("enter the value of n=");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
		printf("*");
		j++;
		;
		}
    i++ ;
    printf("\n");
    }
 return 0 ;
}
