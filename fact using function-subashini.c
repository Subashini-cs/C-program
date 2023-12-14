#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f;
    printf("factorial of the number using function:\n");
    printf("enter the value of n");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial value is %d",f);
    getch();
}
int fact(int n)
{
    int i,k=1;
    for(i=1;i<=n;i++)
    {
        k=k*i;
    }
return k;
}
