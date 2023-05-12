// write a program which accept number from frequency from user and count frequency of 2 in it

#include<stdio.h>
int CountTwo(int iNo)
{
int iCnt =0;
int iDigit =0;
if(iNo<0)  //updator 
{
    iNo = -iNo;
}
while (iNo!=0)
{
    iDigit = iNo %10;
    if(iDigit==2)
    {
        iCnt++;
    }
    iNo=iNo/10;
}
return iCnt;
}
int main()
{
    int iValue =0;
    int bRet =0;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf(" frequency of 2 is:%d",bRet);

    return 0;
}