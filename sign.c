#include<stdio.h>
#include<conio.h>
void main()
{
int num;
scanf("%d",&num);
if(num>0)
printf("POSITIVE");
else if(num<0)
printf("NEGATIVE");
else
printf("ZERO");
getch();
}
