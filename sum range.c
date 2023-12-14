#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[5],*c,sum;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    c=a;
    for(i=0;i<n;i++)
    {
     sum=sum+*c;
     c=c+1;

    }
    printf("\n sum=%d",sum);
    getch();

}
