// Accept N Numbers from user and return the difference between largest and smallest number.
#include<stdio.h>
#include<stdlib.h>

int MaximumMinimum(int Arr[], int iLength)
{
    int iCnt =0;
    int iMin = Arr[0];
     int iMax = Arr[0];
 for(iCnt =0; iCnt< iLength; iCnt++)
 {
    if(Arr[iCnt]>iMax)
    {
        iMax = Arr[iCnt];
    }
     if(Arr[iCnt]<iMin)
    {
        iMin = Arr[iCnt];
    }
    
 }
 return iMax - iMin;
}
int main()
{
    int iSize =0,iRet =0, iCnt =0, iValue=0;
    int *p = NULL;


    printf("Enter number of elements");
    scanf("%d",&iSize);



    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elemets\n",iSize);
    for(iCnt =0; iCnt<iSize;iCnt++)
    {
        printf("Enter elements:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = MaximumMinimum(p,iSize);
    printf("Difference between largest and smallest no is %d",iRet);
    
    
      
    
    
    free(p);
    return 0;
}