//Write a program which accept string from user and check whether it contain vowels in it or not
// Input : "marvellous"
// output: TRUE
// Input : "Demo"
// output: TRUE
// Input : "xyz"
// output: False
#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char * str)
{
    int iCnt =0;
    while (*str!='\0')
    {
        if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            return true;
            
        }
      
        str++;
    }
    return false;
}
int main()
{
    char arr [20];
    int bRet =false;
    printf("Enter string\n");
    scanf(" %[^'\n']s",arr);

    bRet = CheckVowel(arr);
    if(bRet==true)
    {
        printf("It contain vowels\n");
    }

else
{
    printf("It not contain vowels\n");
}
return 0;
}