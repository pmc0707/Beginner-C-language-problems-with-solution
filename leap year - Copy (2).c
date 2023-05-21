#include<stdio.h>
#include<conio.h>
main()
{
	int year;
	printf("enter the age ");
	scanf("%d",&year);
	if(year%4==0)
	{ 
	printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	getch();
}
