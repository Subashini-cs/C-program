//Prime numbers between given ranges
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,c,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            printf("\t%d",i);
    }
    getch();
}
