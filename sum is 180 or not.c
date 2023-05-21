#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
    printf("enter the value of a b and c");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c)==180)
	printf("it's a triangle");
	else
	printf("it's not a triangle");
	getch();	
}
