//write a program which accept N from user and print all odd numbers up to N
#include<stdio.h>
void OddDisplay(int iNo)
{
int iCnt =0;
for(iCnt=1; iCnt<=iNo;iCnt+=2)

{
    printf("%d\t",iCnt);
}

}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}