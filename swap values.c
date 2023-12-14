#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    swap(a,b);
    getch();

}
void swap(int i,int j)
{
    int t;
    t=i;
    i=j;
    j=t;
    printf("the swapped value are %d %d",i,j);
}
