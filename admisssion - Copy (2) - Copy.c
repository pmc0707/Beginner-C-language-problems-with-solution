#include<stdio.h>
#include<conio.h>
main()
{
	int math,phy,chem, total;
	printf("enter the value of  math phy and chem");
	scanf("%d%d%d",&math,&phy,&chem);
	if(math>=65 && phy>=55 && chem>=50 &&(math+phy+chem)>=190)
	printf("eligible for admission");

	else
	printf("not eligible for adimission");
	getch();
}
