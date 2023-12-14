#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10],i,j,t;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("the elements of the array:");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=i;j++)
        {
        if(a[i]>a[j])
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
        }
    }
    printf("the array is:");
    for(i=1;i<n;i++)
        printf("%d",a[i]);
    getch();
}
