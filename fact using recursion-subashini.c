#include<stdio.h>
#include<conio.h>
int main()
{
int a,f;
printf("the factorial of the number using recursion:\n");
printf("enter the value of a:");
scanf("%d",&a);
f=fact(a);
printf("the factorial value is %d",f);
getch();
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}
