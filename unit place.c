#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int h,t,u;
printf("enter the value of n:");
scanf("%d",&n);
h=n/100;
t=(n%100/10);
u=n%10;
printf("%d hunfreds %d tens %d units",h,t,u);
}
