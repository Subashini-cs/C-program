#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,difference,product,division;
printf("enter the number:");
scanf("%d %d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
division=a/b;
getch();
printf("\nthe sum is %d",sum);
printf("\nthe difference is %d",difference);
printf("\nthe product is %d",product);
printf("\nthe division is %d",division);
getch();
}
