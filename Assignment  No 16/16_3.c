//Accept numbers of rows and number of columns from user and display below pattern
// input : iRow =3  iCol =5
//output:
// A    B   C   D   
// A    B   C   D
// A    B   C   D
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int i=0,j=0;
char ch ='A';
for(i=1,ch='A';i<=iRow;i++,ch++)
{
    for(j=1;j<=iCol;j++)
    {
        printf("%c\t",ch);
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