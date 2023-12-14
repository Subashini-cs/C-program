#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,*p[30],arr[30],n;
printf("Enter the number of elements to be added in array:");
scanf("%d",&n);
printf("Enter the elements in an array:");
for(i=0;i<n;i++)
    {
       p[i] = &arr[i];
           scanf("%d,&arr[i]");
    }
    for(i=0;i<n;i++)
    {
  sum = sum + *p[i] ;
    }
    printf("The sum of array elements using pointers = %d",sum);
}

