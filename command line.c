#include<stdio.h>
#include<conio.h>
void main(int argc,char*argv[])
{
//print("fuck");
    printf("program name is %s\n",argv[0]);
    if(argc<2)
    {
        printf("no argument passed through command line.\n");

    }
    else
    {
        printf("First argument is %s\n",argv[1]);
    }
    getch();

}
