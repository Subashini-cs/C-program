#include<stdio.h>
void main()
{
    int a[10],i,position,n,value;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the location");
        scanf("%d",&position);
   printf("enter the number:");
   scanf("%d",&value);
   for(i=n-1;i>=position-1;i--)
            a[i+1]=a[i];
   a[position-1]=value;
   printf("resultant array is:");
   for(i=0;i<=n;i++)
    printf("%d",a[i]);
}
