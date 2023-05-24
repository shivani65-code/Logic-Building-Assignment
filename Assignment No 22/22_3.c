// write a program which accept string from user and return diffrence between frequency of small characters and frequency of capital letters
//Input: "MarvellouS
//Output : 6(8-2)

#include<stdio.h>
int Difference(char * str)
{
    int CapitalCount =0;
    int SmallCount =0;
    while (*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            CapitalCount++;
            
        }
        else if((*str>='a')&&(*str<='z'))
        {
            SmallCount++;
        }
        str++;
    }
    return SmallCount - CapitalCount;
}
int main()
{
    char arr [20];
    int iRet =0;
    printf("Enter string\n");
    scanf(" %[^'\n']s",arr);
    iRet = Difference(arr);
    printf("Difference between capital and small letters :%d",iRet);
    return 0;

}