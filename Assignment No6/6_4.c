//write a program which accept number from user and display its table
#include<stdio.h>
void Table(int iNo)
{
int iCnt =0;
if(iNo<0)  //updator
{
    iNo = -iNo;
}
for(iCnt=1;iCnt<=10;iCnt++)

{
    printf("%d * %d =%d\n",iNo,iCnt,iNo*iCnt);
}
}
int main()
{
    int iValue =0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}
