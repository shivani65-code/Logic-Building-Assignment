//Accept character from user and check whether it is digit or not(0-9)
// Input : 7
//Output : TRUE
// Input : d
//OutPuut: FALSE

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkDigit(char cValue)
{
if((cValue>='0')&&(cValue<='9'))
{
    return TRUE;
}
else
{
    return FALSE;
}

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);
    bRet = ChkDigit(cValue);

    if (bRet== TRUE)
    {
        printf("It is digit\n");

    }
    else
    {
        printf("It is not a digit\n");
    }
    return 0;
}