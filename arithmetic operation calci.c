#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,ch,g;
float f;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the choice ch:");
scanf("%d",&ch);
switch(ch)
{
case 1:

        c=a+b;
        printf("sum is %d",c);
        break;

case 2:

        d=a-b;
        printf("difference is %d",d);
        break;

case 3:

        e=a*b;
        printf("product is %d",e);
        break;

case 4:

        f=a/b;
        printf("division is %f",f);
        break;

case 5:

        g=a%b;
        printf("modulus is %d",g);
        break;

    default:
        printf("enter the correct choice");
        break;
}
}

