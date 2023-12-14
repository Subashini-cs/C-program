#include<stdio.h>
#include<conio.h>
void main()
{
    int t,e,m,sc,so;
    int total;
    float average;
    printf("enter the subject marks:");
    scanf("%d %d %d %d %d",&t,&e,&m,&sc,&so);
    total=t+e+m+sc+so;
    printf("the total is %d",total);
    average=total/6;
    printf("the average is %f",average);
    getch();

}
