#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i;
  printf("enter starting year");
  scanf("%d",&a);
  printf("enter ending year");
  scanf("%d",&b);
  for(i=a;i<=b;i++)
  {
  if((i%4==0)&&((i%400==0)||(i%100!=0)))
  {
    printf("%d \n",i);
  }
  }
  getch();
}
