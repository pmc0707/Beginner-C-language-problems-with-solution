#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter the value of a ");
	scanf("%d",&a);
	if((65<=a && a<=90) || (97<=a && a<=122))
	{
		printf("alphabet");
	}
	else
	{
		printf("not alphabet");
	}
	getch();
}
