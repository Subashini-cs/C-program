#include <stdio.h>
int main()
{
 int i, first, last, middle, n, key, a[100];
 printf("Enter number of elements\n");
 scanf("%d", &n);
printf("Enter %d integers\n", n);
for (i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }
printf("Enter value to find\n");
scanf("%d", &key);
first = 0;
last = n - 1;
middle = (first+last)/2;
while (first <= last)
{
   if (a[middle] < key)
      {
        first = middle + 1;
      }
    else if (a[middle] == key)
     {
printf("%d found at location %d.\n", key, middle+1);
break;
   }
 else
 last = middle - 1;
 middle = (first + last)/2;
  }
 if (first > last)
printf("Not found! %d isn't present in the list.\n", key);
 return 0;
}


