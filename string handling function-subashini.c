#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    char b[10]="subashini";
    char c[10];
    char d[10]="suba";
    char e[10]="shini";
    int f;
    char g[10]="subashinic";
    printf("enter the word:");
    scanf("%s",a);
    printf("the length of the string is %d\n",strlen(a));
    strcpy(c,b);
    printf("value of the strcpy :%s\n",c);
    strcat(d,e);
    printf("the value of strcat is %s\n",d);
    f=strcmp(b,g);
    printf("%d",f);
    getch();
}
