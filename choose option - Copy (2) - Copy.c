#include<stdio.h>
main()
{
	int n,a,b,sum,sub,div,multi;
	printf("*******************option***********************\n");
	printf("1.sum             2.sub\n");
	printf("3.div             4.multi\n");
	printf("enter the value of n");
	scanf("%d",&n);
	switch(n)
	case 1:
	{
		printf("enter the value of a and b");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("sum=%d",sum);
		break;
	case 2:
	    printf("enter the value of a and b");
		scanf("%d%d",&a,&b);
		sub=a-b;
		printf("sub=%d",sub);
		break;
	case 3:
		printf("enter the value of a and b");
		scanf("%d%d",&a,&b);
		div=a/b;
		printf("div=%d",div);
		break;
	case 4:
		printf("enter the value of a and b");
		scanf("%d%d",&a,&b);
		multi=a*b;
		printf("multi=%d",multi);
		break;
	    default :
	    printf("not valid number ");
	    break ;
	}
	return 0;
}
	
		
		
		
		

