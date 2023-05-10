#include<stdio.h>
void FactRev(int iNo)
{
 int iFactRev =1;
 

    for(int iCnt =(iNo/2); iCnt>0; iCnt--)       
    {
        if((iNo % iCnt) == 0)
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
FactRev(iValue);
return 0;

}