//Program to check if number or string is palindrome
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char strin[100];

    printf("Enter a string or number to check if palindrome:");   //Enter 
    scanf("%s",&str);

    strcpy(strin,str);
    strrev(strin);
    int i=strcmp(str,strin);        //It will compare both the strings

    if(i==0)
    {
        printf("The number or string is palindrome");
    }

    else
    {
        printf("The number or string is not palindrome");
    }

return 0;
}