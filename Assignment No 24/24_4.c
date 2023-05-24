// Write a program which accept string from user and accept one character. Return index of last occurence of that character.
//Input : Marvellous Multi OS
 //         M
// Output: 11
//Input : Marvellous Multi OS
 //         W
// Output: -1
//Input : Marvellous Multi OS
 //         e
// Output: 4
#include<stdio.h>
#define ERR_NOTFOUND -1

int LastChar(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;
    while(*str!='\0')
    {
        if(*str==cValue)
        {
          iPos=iCnt;
          
        }
        str++;
        iCnt++;
        
    }
    return iPos;
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
 
    iRet = LastChar(Arr,ch);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("Character location is %d\n",iRet);
    }
    

    
    return 0;
}