//// Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


typedef int BOOL;

int Maximum(int Arr[],int iLength)
{
    int iCnt =0;
    int iMax =Arr[0];
    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]> iMax)
        {
            iMax = Arr[iCnt];
            
        }
       
    }
    return iMax;
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
    iRet = Maximum(p,iSize);
    printf("Largest Number is %d",iRet);
    
    
      
    
    
    free(p);
    return 0;
}