#include<stdio.h>
main()
{
	int x=0,sum=0;
	do
	{
		++x;
		if(x%2!=0)
		{
		sum = sum+x;
		}
	
	}
     while(x<100);	
		printf("%d",sum);

}
