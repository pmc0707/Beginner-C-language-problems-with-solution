#include<stdio.h>
main()
{
	int x=4,y=0;
	while(x>=0)
	{
		x--;
		y++;
	if(x==y)
	continue;
	else
	printf("%d\n%d\n",x,y);
	}
}
