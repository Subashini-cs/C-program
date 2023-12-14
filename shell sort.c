#include<stdio.h>
void shellsort(int a[],int n)
{
    for(int interval=n/2;interval>0;interval/=2)
    {
        for(int i=interval;i<n;i++)
        {
            int temp=a[i];
            int j;
            for(j=i;j>=interval&&a[j-interval]>temp;j-=interval)
            {
                a[j]=a[j-interval];
            }
            a[j]=temp;
            }
        }
    }
    void printArray(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d\n", a[i]);

        }
        printf("\n");
    }
    int main()
    {



        int data[]={9,8,3,7,5,6,4,1,88};
        int n=sizeof(data)/sizeof(data[0]);
        shellsort(data,n);
        printf("sorted array:\n");
        printArray(data,n);
        return 0;

    }
