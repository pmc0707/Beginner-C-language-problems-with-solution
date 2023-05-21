#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if((65<=n && n<=90)||(97<=n && n<=122) )
	{
		printf("alphabet");
	}
	if(47<=n && n<=57)
    {
    	printf("digit");
	}
	if((n>=0 && n<=47) || (n>=50 && n<=64) || (n>=91 && n<=96) || (n>=125 && n<=127))
    {
    	printf("special symbol");
	}
	getch();
}
