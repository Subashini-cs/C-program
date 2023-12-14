#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    char b;
    char c[10];
    double d;
    long e;
    int f,g;
    printf("enter the value of float: ");
    scanf("%f",&a);
    printf("enter the string:");
    scanf("%s",&c);
    printf("enter the double:");
    scanf("%lf",&d);
    printf("enter the long:");
    scanf("%ld",&e);
    printf("enter the signed value:");
    scanf("%d",&f);
    printf("enter the unsigned value:");
    scanf("%d",&g);
    printf("enter the value of char:");
    scanf("%s",&b);
    printf("\nthe value of float is %f",a);
    printf("\nthe value of char is %c",b);
    printf("\nthe value of string is %s",c);
    printf("\nthe value of double is %lf",d);
    printf("\nthe value of long is %ld",e);
    printf("\nthe value of signed is %d",f);
    printf("\nthe value of unsigned is %d",g);
    getch();
}
