// Accept  character from user and check whether it is special  symbol or not (!,@,$,%,^,&,*)
// Input : %
// output : TRUE
// Input : d
// Output: FALSE

#include<stdio.h>
#include<stdbool.h>



bool ChkSpecial(char ch)
{
if((ch=='!')||(ch=='@')||(ch=='$')||(ch=='%')||(ch=='^')||(ch=='&')||(ch=='*'))
{
    return true;
}
else
{
    return false;
}
}
int main()
{
    char cValue ='\0';
    bool bRet = false;
      printf("Enter The Character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is not special character\n");
    }


    
    return 0;
}
