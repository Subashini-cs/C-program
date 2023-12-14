#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
if(x>=0&&y>=0)
    printf("1st quadrant");
else
    if(x<=0&&y>=0)
    printf("2nd quadrant");
    else
      if(x<=0&&y<=0)
      printf("3rd quadrant");
      else
      printf("4th quadrant");
}

