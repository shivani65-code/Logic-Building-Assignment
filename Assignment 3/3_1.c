#include<stdio.h>
int MultFact(int iNo)
{
int iMultFact =1;
int iCnt =0;
for(iCnt =1;iCnt<=iNo; iCnt++)
{
    iMultFact= iMultFact*iCnt;
}
return iMultFact;

}
int main()
{
    int iValue=0;
    int iRet =0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = MultFact(iValue);
    printf("%d",iRet);
    return 0;
}