//Accept N number from user and dispaly all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
       if((Arr[iCnt]>=100)&&(Arr[iCnt]<999)) 
       {
        printf("%d\t",Arr[iCnt]);
       }
    }
    
}

int main()
{
    int iSize =  0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    
    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter Element %d:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    Digits(p,iSize);

    free(p);
    return 0;
}
      