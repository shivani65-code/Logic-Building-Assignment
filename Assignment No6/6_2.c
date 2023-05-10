// Accept single digit number from user and print it into word
#include<stdio.h>
void Display(int iNo)
{
char *words[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
if(iNo>=0 && iNo<=9)
{
    printf("%s\n",words[iNo]);
}
else
{
    printf("invalid input\n");
}
}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
     
}