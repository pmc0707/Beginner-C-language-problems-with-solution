#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,ratio;
	printf("enter the value of a and b ");
	scanf("%d%d",&a,&b);
	ratio= a/b;
	if(ratio>0)
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d,\nb=%d",a,b);
	
}
