#include<stdio.h>
main()
{
	int days ,years,week,n;
	printf("enter the value of n ");
	scanf("%d",&n);
	years=n/365;
	week=(n%365)/7;
	days=n-((years*365)+(week*7));
	printf("years=%d\nweek=%d\ndays=%d",years,week,days);
	getch();
}

