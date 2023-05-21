#include<stdio.h>
#include<stdio.h>
main()
{
	int age;
	printf("enter the age ");
	scanf("%d",&age);
	if(age>18)
	{
		printf("eligible for vote ");
	}
	else
	{
		printf("not eligible for vote ");
	}
	getch();
}
