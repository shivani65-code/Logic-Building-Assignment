// Write a program which accept string from user and accept one character. Return frequency of that character.
//Input : Marvellous Multi OS
 //         M
// Output: 2
//Input : Marvellous Multi OS
 //         W
// Output: 0
#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str, char cValue)
{
    int iCnt = 0;
    while(*str!='\0')
    {
        if(*str==cValue)
        {
          iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char ch ='\0';
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&ch);
 
    iRet = CountChar(Arr,ch);
    printf("Character frequency is %d\n",iRet);

    
    return 0;
}