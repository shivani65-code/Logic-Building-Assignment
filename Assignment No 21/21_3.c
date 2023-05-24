//Accept character from user if it is capital then display all the characters from input characters till Z. If input character is small then print  all the characters in reverse order till a. In other cases retrun directly.
// Input: Q
//output: Q R S T U V W X Y Z 
// Input: m
// output : m l k j  i h g f e d c b a
// input :8
// output : 8
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