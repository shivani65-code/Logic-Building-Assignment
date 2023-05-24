// Write a program which accept string  from user and count number of white spaces
// Input: MarvellouS
// Output: 0
// Input: Marellous Infosystem
//Output: 1
// Input : marvellous Infosystem by piysh Manhohar Khairnar
// output : 5
#include<stdio.h>
int CountWhite(char *str)

{
    int iCount =0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet =0;


    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountWhite(Arr);
    printf("Number of White spaces :%d",iRet);

   
    return 0;
}