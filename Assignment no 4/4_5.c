// write a program which accept total marks and obtained marks from user and calculate percentage
#include<stdio.h>
float Percentage(float No1, float No2)
{
float Ans =0;
if(No1==0)
{
    printf("please enter valid input\n");
    return 0.0;
}
Ans = No2 /No1 *100;
return Ans;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet =0.0f;
    printf("please enter total marks\n");
    scanf("%d",&iValue1);
     printf("please enter obtained marks\n");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("your percentage is :%f\n",fRet);
    return 0;

}