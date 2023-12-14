#include<stdio.h>
#include<conio.h>
struct student
{
    char name[10];
    int roll;
    int marks;
};
void main()
{
    struct student s;
    printf("\nenter the student information\n");
    printf("\nenter name:");
    scanf("%s",s.name);
    printf("enter the roll:");
    scanf("%d",&s.roll);
    printf("enter the marks:");
    scanf("%d",&s.marks);
    printf("\n%s",s.name);
    printf("\n%d",s.roll);
    printf("\n%d",s.marks);
    getch();

}
