//Accept character from user and check whether it is small case or not(a-z)
// Input : g
//Output : TRUE
// Input : D
//OutPuut: FALSE

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSmall(char cValue)
{
if((cValue>='a')&&(cValue<='z'))
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
    bRet = ChkSmall(cValue);

    if (bRet== TRUE)
    {
        printf("It is small case character\n");

    }
    else
    {
        printf("It is not small case character\n");
    }
    return 0;
}