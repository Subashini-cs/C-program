#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    add(a,b);
    getch();
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("the sum is %d",c);
    getch();
}

