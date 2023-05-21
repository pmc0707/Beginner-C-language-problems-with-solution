#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float sinx, cosx, tanx,x;
	printf("enter the value of x ");
	scanf("%f",&x); 
	sinx=sin(x*(3.142/180));
	cosx=cos(x*(3.142/180));
	tanx=sinx/cosx;
	printf("%f",tanx);
	getch();

}
