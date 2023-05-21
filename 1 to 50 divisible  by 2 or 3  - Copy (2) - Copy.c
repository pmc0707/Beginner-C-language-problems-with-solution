#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	while(i<=50) 
	{
		if(i%2==0 && i%3==0)
		{
        printf("i=%d\t",i);
        }
       i++;
	}
	getch();
}
