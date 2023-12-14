#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("largest among two numbers using if-else\n:");
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
if(a>b)
    printf("%d is greater",a);
else
    printf("%d is greater",b);
getch();
}
