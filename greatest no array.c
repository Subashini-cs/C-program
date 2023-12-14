#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10],i,*g;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    g=a;
    for(i=0;i<n;i++)
    if(a[i]>*g)
    {
        *g=a[i];

    }
    printf("the greatest value is %d",*g);
}
