#include<stdio.h>
#include<conio.h>
main()
{ 
 int x=2,y=3,s1,s2;
 s1=x+(++y);
 s2=++x+y++;
 printf("%d\n",s1);
 printf("%d",s2);
 getch();
}
