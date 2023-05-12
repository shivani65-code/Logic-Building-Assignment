// write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
#include<stdio.h>
int CountDiff(int iNo)
{
int iDigit =0;
int evenSum =0;
int oddSum =0;
if(iNo<0)
{
    iNo =- iNo;
}
while(iNo!=0)
{
    iDigit = iNo % 10;
    if(iDigit % 2 ==0)
    {
        evenSum = evenSum+ iDigit;
    }
    else
    {
        oddSum =oddSum +iDigit;
    }
    iNo= iNo/10;
}
return evenSum-oddSum;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet =CountDiff(iValue);
    printf("%d",iRet);
    return  0;
}