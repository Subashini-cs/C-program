#include<stdio.h>
#include<conio.h>
void main()
{
int temp,sum=0,r,n;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
}
if(temp==sum)
    printf("palindrome");
else
    printf("not palindrome");
}
