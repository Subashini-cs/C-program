#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct emp
{
int empno;
char name[20];
int npay,allowance,deduction,bpay;
};
void main()
{
    int i,n;
    struct emp *e[10];
    printf("enter the number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            e[i]=(struct emp*)malloc(sizeof(struct emp));
            printf("enter the employee number");
            scanf("%d",&e[i]->empno);
            printf("enter the name:");
            scanf("%s",&e[i]->name);
            printf("enter the basic pay,allowance and deductions:");
            scanf("%d %d %d",&e[i]->bpay,&e[i]->allowance,&e[i]->deduction);
            e[i]->npay=e[i]->bpay+e[i]->allowance-e[i]->deduction;
        }
        printf("\nempno\tname\tbpay\tallow\tdeduction\tnpay\n");
        for(i=0;i<n;i++)
        {
            printf("\n%d\t%s\t%d\t%d\t\t%d\t%d\n",e[i]->empno,e[i]->name,e[i]->bpay,e[i]->allowance,e[i]->deduction,e[i]->npay);
        }
        getch();
    }

