#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the value of a b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
     printf("%d",a);
     else if(b>=a && b>=c)
     printf("%d",b);
     else 
     printf("%d",c);
     getch();
     
	}
