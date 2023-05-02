#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven (int iNo)
{
    if ((iNo%2) == 0)
    {
        
        return FALSE;
    }
    else
    {
        
        return TRUE;
    }

}
int main()
{
    int iValue=0;
    BOOL bRet = FALSE;
    printf("Enter number");
    scanf("%d",& iValue);
    bRet =ChkEven(iValue);
    if(bRet==FALSE)
    {
        printf("it is even number\n");
    }
    else
    {
        printf("it is odd number\n");
    }

    return 0;
}