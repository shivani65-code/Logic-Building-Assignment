# include<stdio.h>
void Display(int iNo)
{
    int icnt = 0;
    for (icnt=1;icnt<=iNo;icnt++)
    {
        printf("*");
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