#include<stdio.h>
main()
{
	int height, base ,area;
	printf("enter the value of height and base");
	scanf("%d%d",&height,&base);
	area = (base*height)/2;
	printf("area=%d",area);
	getch();
}
