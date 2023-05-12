//write a program which accept number from user and display its digit in reverse order.
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit =0;
    int iReverse =0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit = iNo %10;
        iReverse = (iReverse *10)+iDigit;
        iNo = iNo/10;

        printf("%d",iDigit);

    }
}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",iValue);

    DisplayDigit(iValue);
    return 0;
}