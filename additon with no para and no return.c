#include<stdio.h>
#include<conio.h>
void main()
{

    addition();
    getch();

}
void addition()
{
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("the sum of a and b is %d",c);
    getch();
}
