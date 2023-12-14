#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,k,m,n;
    int difference[10][10],product[10][10];
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
    printf("sum of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d \t",sum[i][j]);
        }
        printf("\n");
    }
    printf("difference of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            difference[i][j]=a[i][j]-b[i][j];
            printf("%d \t",difference[i][j]);
        }
        printf("\n");
    }
    printf("product of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            product[i][j]=0;
            for(k=0;k<m;k++)
            {
                product[i][j]=product[i][j]+a[i][k]*b[k][j];
            }
        }
    }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d \t",product[i][j]);
            }
            printf("\n");
        }
    getch();
}
