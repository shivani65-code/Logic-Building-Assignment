// Write a program which accept string from user and reverse that string in place.
// input: abcd
// output : dcba
// input: abba
// output: abba 
#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

}

int main()
{
    char Arr[20];
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified String is %s",Arr);
    return 0;
}