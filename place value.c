#include<stdio.h>
#include<conio.h>
void main()
{
    int  n=172,h,t,u;
    h=n/100;
    t=(n%100)/10;
    u=n%10;
    printf("the place value is %d hundreds %d tens %d units",h,t,u);
    printf("the reverse is %d %d %d",u,t,h);

}
