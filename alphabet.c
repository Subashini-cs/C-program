#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    int b;
    int c;
    printf("enter the alphabet:");
    scanf("%c",&a);
    b=a-96;
    printf("%d",b%10);
    getch();

}
