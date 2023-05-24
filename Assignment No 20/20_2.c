//Accept character from user and check whether it is capital or not(A-Z )
// Input : F
//Output : TRUE
// Input : d
//OutPuut: FALSE

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCapital(char cValue)
{
if((cValue>='A')&&(cValue<='Z'))
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
    bRet = ChkCapital(cValue);

    if (bRet== TRUE)
    {
        printf("It is capital letter\n");

    }
    else
    {
        printf("It is not a capital letter\n");
    }
    return 0;
}