#include<stdio.h>
void main()
{
    int a,n,i,sum;
    printf("sum of n number\n");
    printf("enter the range:");
    scanf("%d",&a);
    printf("1.for\n");
    printf("2.while\n");
    printf("3.do while\n");
    printf("enter the choice:");
    scanf("%d",&n);
    sum=0;
    i=1;
    switch(n)
    {
    case 1:
        {
            for(i=1;i<=a;i++)
            {
                sum=sum+i;
            }
            printf("the sum is %d",sum);
            break;
        }
    case 2:
        {
            while(i<=a)
            {
                sum+=i;
                i++;
            }
            printf("the sum is %d",sum);
            break;
        }
    case 3:
        {
            do
            {
                sum+=i;
                i++;
            }while(i<=a);
            printf("the sum is %d",sum);
            break;
        }
    default:
        {
            printf("enter the correct choice");
        }
        getch();


    }
}
