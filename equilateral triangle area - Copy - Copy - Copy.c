#include<stdio.h>
main()
{
	float side, area;
	printf("enter the value of side");
	scanf("%f",&side);
	area=(1.73*(side*side))/4;
	printf("area=%f",area);
	getch();
}
