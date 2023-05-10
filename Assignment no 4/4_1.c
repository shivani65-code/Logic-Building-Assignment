// write a program which accept name from user and print the name
#include<stdio.h>
int main()
{
    char Name[30];
    printf("please enter full name");
    scanf("%s", Name);
    printf("your name is: %s",Name);
    return 0;
}