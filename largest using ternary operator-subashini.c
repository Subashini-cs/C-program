#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("the largest among two number using ternary operator is:\n");
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    (a>b)?
    printf("%d is greater \n",a):
    printf("%d is greater",b);
    getch();

}
