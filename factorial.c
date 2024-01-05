#include<stdio.h>
#include<conio.h>
int main()
{
    int f,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    f=fact(n);
    printf("\n The factorial value=%d",f);
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
