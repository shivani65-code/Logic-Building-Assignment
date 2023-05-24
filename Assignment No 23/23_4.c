// write a program which accept string from user and display only digits from that string
// Input: marve89llous121
// OutPut: 89121
// Input : demo
// output :
#include<stdio.h>
void DisplayDigit(char *str)

{
    int iCount =0;
    while(*str!='\0')
    {
        if((*str>='0')&&(*str<='9'))
        {
            iCount++;
        }
        str++;
    }
    printf("%d",iCount);
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    DisplayDigit(Arr);

   
    return 0;
}