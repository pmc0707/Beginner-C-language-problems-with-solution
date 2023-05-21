#include<stdio.h>
main()
{
	int a=2,b=3;
	b=a++ +b--;
	a=a-- + ++b;
	b=++a + --b;
	printf("a=%d\nb=%d",a,b);
	getch();

}
