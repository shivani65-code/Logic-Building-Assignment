// Write a program which accept string from user and conver it into Upper case.
//Input: Marvellous Multi OS
// Output: MARVELLOUS MULTI OS
#include<stdio.h>
void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str =*str-32;
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

    printf("Modified String is:%s\n",Arr);
    return 0;
}