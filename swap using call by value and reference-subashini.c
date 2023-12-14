/*Call by value
#include<stdio.h>
void swap(int a, int b);
int main()
{
int m,n;
printf("swapping of numbers by call by value:\n");
printf("Enter the values of m and n\n");
scanf("%d %d",&m,&n);
printf(" values before swap  m = %d and n = %d", m, n);     swap(m, n);
return 0;
}
void swap(int a, int b)
{
 int tmp;
tmp= a;
a = b;
b = tmp;
printf(" \nvalues after swap  m = %d and n = %d", a,b);
}*/
//Call by reference
#include<stdio.h>
int main()
{
int a;
int b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
printf("Before swapping the values in main a = %d, b = %d\n",a,b);
swap(&a,&b);
}
void swap (int *a, int *b)
{
int temp;
temp = *a;
*a=*b;
*b=temp;
printf("\n After swapping values in function a = %d, b = %d\n",*a,*b);
}

