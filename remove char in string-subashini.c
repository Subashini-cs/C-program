#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int i,j;
    printf("enter a word:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        while(!(a[i]>='a'&&a[i]<='z')&&!(a[i]>='A'&&a[i]<='Z')&&!(a[i]=='\0'))
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
            a[j]='\0';
        }
    }
    printf("the output string is %s",a);
    getch();
}
