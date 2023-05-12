// write a program which accept number from user and return multiplication of all digits
#include<stdio.h>
int MultDigits(int iNo)
{
int Result =1;
int iDigit ;
while(iNo !=0)
{
    iDigit = iNo %10;
    if(iDigit !=0)
    {
        Result = Result * iDigit;
    }
    iNo =iNo/10;
}
return Result;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);
    return 0;
}