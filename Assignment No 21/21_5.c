//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
// Input: A
// Output: Decimal       65
//         octal         0101
//         hexadecimal   0x41 

#include<stdio.h>
void Display(char ch)
{
    printf("Decimal:%d\n",ch);
    printf("octal:%o\n",ch);
    printf("hexadecimal:%x\n",ch);
}
int main()
{
    char cValue = '\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}