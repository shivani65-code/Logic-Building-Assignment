// write a program which accept number from user and display its table in reverse order
#include<stdio.h>
void TableRev(int iNo)
{
int iCnt =0;
if(iNo<0)  //updator
{
    iNo = -iNo;
}
for(iCnt=10;iCnt>=1;iCnt--)

{
    printf("%d * %d =%d\n",iNo,iCnt,iNo*iCnt);
}


}
int main()
{
    int iValue =0;
    printf("Enter Number");
    scanf("%d",&iValue);
    TableRev(iValue);
    return 0;
}