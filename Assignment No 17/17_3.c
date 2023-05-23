// Accept number of rows and number of columns from user and display below pattern
//input: iRow =4  iCol =4
// output :
// a    b   c   d   e
// 1    2   3   4   5
// a    b   c   d   e
// 1    2   3   4   5
// a    b   c   d   e





#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int i=0,j=0;
char ch ='a';

for(i=1;i<=iRow;i++)
{
    for(j=1,ch='a';j<=iCol;j++,ch++)
    {
    if((i%2)!=0)
    {
        printf("%c\t",ch);
    }
    else
    {
        printf("%d\t",j);
    }
   
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