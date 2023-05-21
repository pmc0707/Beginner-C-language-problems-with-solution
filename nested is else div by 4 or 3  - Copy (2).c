#include<stdio.h>
#include<stdio.h>
main()
{
	int N;
	printf("enter the value of N");
	scanf("%d",&N);
	if(N%2==0){
	printf("even number ");
	if(N%4==0)
	{
	printf("divisible by 4");
	}
	}
	else
	{
	
	printf("not divisible by 4");
}
	if(N%3==0)
	printf("divisible by 3");
	else
	printf("not divisible by 3");
	getch();
}
