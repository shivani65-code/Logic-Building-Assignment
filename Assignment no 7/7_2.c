//write a program which accept number from user and check whether it contain 0 in it or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
int iDigit =0;
while(iNo!=0)
{
    iDigit = iNo %10;
    if(iDigit ==0)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
    iNo = iNo/10;
}

}
int main()
{
    int iValue =0;
    BOOL bRet =FALSE;
    printf("Enter number");
    scanf("%d",iValue);
    bRet = ChkZero(iValue);

    if (bRet==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}