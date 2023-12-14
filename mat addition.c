#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,m,n;
    printf("enter the number of rows:");
    scanf("%d",&m);
    printf("enter the number of columns:");
    scanf("%d",&n);
    printf("enter the elements of the first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of the second matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("sum of the matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d \t",sum[j][i]);
        }
        printf("\n");
    }
    getch();
}
