//  write a program which accept two numbers and check whether numbers are qual or not
#include<stdio.h>
#include<Stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkEqual(int iNo1, int iNo2)
{
if(iNo1==iNo2)
{
    return TRUE;
}
else{
    return FALSE;

}
}
int main()
{
    int iValue1 =0;
    int iValue2 =0;
    BOOL bRet = FALSE;
    printf("please enter two numbers");
    scanf("%d %d ",&iValue1,&iValue2);
    bRet =ChkEqual(iValue1,iValue2);
    if(bRet ==TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
