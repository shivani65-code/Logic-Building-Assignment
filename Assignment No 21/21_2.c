// Accept character from user if character is small display its corresponding capital character, and if it small then display its corresponding capital in othwr case display as it is.
// Input : Q
// OUTPUT : q
// Input : m
// OUTPUT : M
// Input : 4
// OUTPUT : 4
// Input : %
// OUTPUT : %

#include<stdio.h>
void Display (char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        ch = ch+32;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        ch = ch-32;
    }
    else
    {
        ch=ch;
    }
    printf("%c",ch);

}
int main()
{
    char cValue ='\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}