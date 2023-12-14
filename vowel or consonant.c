#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    printf("enter the alphabet:");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("it is a vowel");
        break;
        default:printf("it is consonant");
        }
        getch();

}
