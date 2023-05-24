// Write a program which accept string from user and conver it into lower case.
//Input: Marvellous Multi OS
// Output: marvellous multi os
#include<stdio.h>
void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str =*str+32;
        }
        
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    strlwrX(Arr);

    printf("Modified string is:%s\n",Arr);
    return 0;
}