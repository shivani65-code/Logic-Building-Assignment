// Accept N nubers from user and accept one another number as no check whether no is present or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt=0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}
int main()
{
    int iSize =0,iRet =0, iCnt =0, iValue=0;
    int *p = NULL;
    BOOL bRet =FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elemets\n",iSize);
    for(iCnt =0; iCnt<iSize;iCnt++)
    {
        printf("Enter elements:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p,iSize,iValue);
    if(bRet ==TRUE)
    {
        printf("%dNumber is present",iValue);
    }
    else
    {
        printf("%d Number is not present",iValue);
    }
    return 0;
}