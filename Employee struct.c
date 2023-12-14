#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 100
struct emp
{

    char  name[20];
    int age,salary;
};
int main()
{
    struct emp emp[100];
    int n,i,j;
    printf("enter the number of names");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the name of employee %d",i+1);
        scanf("%s",emp[i].name);
        printf("enter the age of the employee %d",i+1);
        scanf("%d",emp[i].age);
        printf("enter the salary of the employee %d",i+1);
        scanf("%d",&emp[i].salary);

    }
    for(i=0;i<n;i++)
{
    for(j=j+1;j<n;j++)
    {
        if(strcmp(emp[i].name,emp[j].name)>0)
        {
            char temp[100];
            strcpy(temp,emp[i].name);
            strcpy(emp[i].name,emp[j].name);
            strcpy(emp[j].name,temp);
            int t;
            t=emp[i].age;
            emp[i].age=emp[j].age;
            emp[j].age=t;
            int te;
            te=emp[i].salary;
            emp[i].salary=emp[j].salary;
            emp[j].salary=te;


            }
            }

        }
        for(i=0;i<n;i++)
        {
            printf("name:%s,age:%d,salary:%d\n",emp[i].name,emp[i].age,emp[i].salary);

        }
        return(0);

    }

