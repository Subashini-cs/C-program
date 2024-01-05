#include<stdio.h>
#include<conio.h>
void main()
{
    int s;
    s=sum();
    printf("the sum is %d",s);
    getch();
}
int sum()
{
    int a,b,c;
    printf("enter the value for a and b:");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}
