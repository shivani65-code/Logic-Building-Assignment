//Accept number of rows and number of columns from user and display below pattern
//input: irow =4   iCol =4
//output : 1  2   3   4
 //        2  3   4   5
//         3  4   5   6
//         4  5   6   7

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int i=0,j=0;

for(i=1;i<=iRow;i++)
{
    for(j=1;j<=iCol;j++)
    {
   printf("%d\t",i+j-1);
}
 printf("\n");  
}
}

int main()
{
    int iValue1=0,iValue2=0;

   printf("Enter number of rows:\n");
   scanf("%d",&iValue1);
   printf("Enter number of columns:\n");
   scanf("%d",&iValue2);
   Pattern(iValue1,iValue2);
}