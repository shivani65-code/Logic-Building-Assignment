//Accept character from user and check whether it is alphabet or not(A-Z a-z)
// Input : F
//Output : TRUE
// Input : &
//OutPuut: FALSE

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char cValue)
{
if((cValue>='A')&&(cValue<='Z')||(cValue>='a')&&(cValue<='z'))
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
    bRet = ChkAlpha(cValue);

    if (bRet== TRUE)
    {
        printf("It is Character\n");

    }
    else
    {
        printf("It is not a character\n");
    }
    return 0;
}