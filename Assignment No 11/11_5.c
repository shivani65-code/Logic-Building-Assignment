//Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int MUltiplication(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMult = 1;
    int CountOdd = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 !=0)
        {
            iMult = iMult*Arr[iCnt];
            
        }
    }
    return iMult; ;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

   
    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = MUltiplication(p,iSize);
    printf("Multiplication of odd elements is  %d\n",iRet);

    free(p);

    return 0;

}


