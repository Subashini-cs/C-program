#include<stdio.h>
 int main()
{
 int a[100],num,i,j,temp;
printf("Enter how many number you want to enter the array\n");     scanf("%d",&num);
printf("Enter the numbers \n");
for(i=0;i<num;i++)
    {
      scanf("%d",&a[i]);

    }

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
            if(a[i]<a[j])
        {
            temp=a[i];             a[i]=a[j];             a[j]=temp;
          }
     }
   printf("\nthe sorted array is:");
        for(i=0;i<num;i++)
      {
          printf("%d\t",a[i]);
       }
       printf("\nthe greatest number is %d",a[0]);                      printf("\n The smallest number is %d",a[num-1]);

}
