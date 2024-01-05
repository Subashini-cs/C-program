#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,sum=0;
    int ch;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the choice\n1.add using for loop\n2.add using while\n 3.add using do while:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:{
        for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
     }
     break;
     case 2:
         {
             while(i<=n)
             {
                 sum=sum+i;
                 i++;
            }
             printf("%d",sum);
        }
        break;
     case 3:
        {
            do{
                sum=sum+i;
                i++;

            }while(i<=n);
            printf("%d",sum);
        }
        break;
}
getch();
}
