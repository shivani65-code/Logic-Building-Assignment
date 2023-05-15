// Accept N numbers from user and display all such elements which are divisible by 3 and 5
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
  int iCnt =0;
    printf("Elements which are edivisible by  3 and 5 \n:");
    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]% 3==0 && Arr[iCnt] % 5 ==0)
        printf("%d \n",Arr[iCnt]);
    }

}
int main()
{
    int iSize =0;
    int iRet =0;
    int iCnt =0;

    int *p = NULL;
    printf("Enter numberof elements");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);
    free(p);
    return 0;
}