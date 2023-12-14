#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char p[100];
    char ch;
    int chara,words,lines;
    file=fopen("counting.txt","W");
    printf("enter the text press cntr z:");
    while((ch=getchar())!=EOF)
    {
        putc(ch,file);

    }
    fclose(file);
    printf("enter source file path:");
    scanf("%S",p);
    file=fopen(p,"r");
    if(file==0)
    {
        printf("unable to open file");

    }
    chara=words=lines=0;
    while((ch=fgetc(file))!=EOF)
    {
        chara++;
        if(ch=='-'||ch=='\0')
            lines++;
        if(ch=='-'||ch=='\t'||ch=='-'||ch=='\0')
            words++;

    }
    if(chara>0)
    {
        words++;
        lines++;

    }
    printf("");
    printf("total characters=%d",chara);
    printf("total words=%d",words);
    printf("total lines=%d",lines);
    fclose(file);
    return 0;

}
