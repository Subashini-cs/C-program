#include <stdio.h>
int main()
{
int a[100],n,p,i,j,t;
printf("Enter number of elements\n");   scanf("%d", &n);
printf("Enter %d integers\n", n);
for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
   }
 for (i = 0; i < (n - 1); i++)
  {
       p=i;
   for (j = i; j < n; j++)
    {
      if (a[p]>a[j])
    {
         p=j;
    }
    if(p!= i)
   {
  t = a[i];
  a[i]=a[p];
 a[p] = t;
    }
    }
  }
  printf("AFTER SORTING:\n");
  for (i = 0; i < n; i++)
    printf("%d\t",a[i]);
  return 0;
  }

