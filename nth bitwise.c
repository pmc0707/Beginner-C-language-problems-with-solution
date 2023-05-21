#include <stdio.h>
int main()
{
	int n,num,bitstatus;
	printf("enter the value of number");
	scanf("%d", &n);
	printf("enter the nth bit to check(0-31)");
	scanf("%d" ,&num);
	bitstatus = (n>> num)&1;
	printf("The %d bit is set to %d" ,num,bitstatus);
	return 0;	
	
}
