#include<stdio.h>
#include<conio.h>
void  main()
{
    int n1=0,n2=1,n,i,n3;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("%d\n%d\n",n1,n2);

    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d \n",n3);
        n1=n2;
        n2=n3;
     }


}
