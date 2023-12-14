#include<stdio.h>
#include<conio.h>
void main()
{
int c=20;
int *p2;
int **p1;
p2=&c;
p1=&p1;
printf("%d\n",p2);
printf("%d\n",p1);
printf("%d\n",**p1);
getch();
}
