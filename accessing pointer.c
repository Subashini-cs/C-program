#include<stdio.h>
#include<conio.h>
void main()
{

    int a=20;
    int *b;
    int **c;
    b=&a;
    c=&b;
    printf("a is %d\n",a);
    printf("a is %d\n",&a);
    printf("a is %d\n",*b);
    printf("a is %d\n",**c);
    printf("b is %d\n",b);
    printf("address of a is %u\n",&a);
    printf("address of b is %u\n",&b);
    printf("address of a is %u\n",*c);
    printf("address of b is %u\n",c);
    printf("address of c is %u\n",&c);
    getch();
}
