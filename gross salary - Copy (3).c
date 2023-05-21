#include<stdio.h>
main()
{
	int basic,da,hra,grosssalary;
	printf("enter the basic ");
	scanf("%d",&basic);
	if(basic<=10000)
	{
		da=basic*0.8;
        hra=0.2;
	}
        else if(basic<=20000)
	{
		da=basic*0.9;
		hra=basic*0.3;
	}
	else
	{
		da=basic*0.95;
		hra=basic*0.5;
	}
	grosssalary = basic+da+hra;
    printf("grosssalary=%d",grosssalary);
   return 0;
}
