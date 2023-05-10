//write a program which accept numbers from users and display all non factor

#include<stdio.h>
void NonFact(int iNo)
{
    int NonFact =1;
    int iCnt =0;
    for(iCnt =1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\n",iCnt);
        }
    }


}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);
    NonFact(iValue);
    return 0;
}