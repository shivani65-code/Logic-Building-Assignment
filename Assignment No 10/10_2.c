//Accept N numbers from user and return difference between frequency of even number and odd numbers.
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
 int iCnt =0;
    int iCounterEven =0;
    int iCounterOdd =0;
    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]% 2 ==0)
        {
            iCounterEven++;
        }
         if(Arr[iCnt]% 2 !=0)
        {
            iCounterOdd++;
        }
    }
return (iCounterEven- iCounterOdd);
    
}

int main()
{
    int iSize =0;
    int iRet =0;
    int iCnt =0;

    int * p = NULL;

    printf("Enter number of elemets");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p, iSize);

    printf("Result is %d",iRet);
    free(p);
    return 0;
}