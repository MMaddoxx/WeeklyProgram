#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool ispalindrome();
int main()
{
    bool canfunc=true;
    char text[100],mem[100];
    printf("Enter text to check if it's palindrome : ");
    scanf("%s",text);
    mem[strlen(text)]='\0';
    for(int i=0;i<strlen(text);i++)
    {
        mem[i]=text[i];
        if(text[i]>='A'&&text[i]<='Z')
        {
            text[i]=text[i]+32;
        }
        else if(text[i]<'a'||text[i]>'z')
        {
            canfunc=false;
            break;
        }
    }
    if(canfunc==true)
    {
        if(ispalindrome(text)==true)
        {
            printf("%s is palindrome",mem);
        }
        else 
        {
            printf("%s is not palindrome",mem);
        }
    }
    else 
    {
        printf("Try again");
    }
}
bool ispalindrome(char text[100])
{
    bool palindrome;
    for(int i=0;i<(strlen(text)/2);i++)
    {
        if(text[i]==text[strlen(text)-1-i])
            {
                palindrome=true;
            }
            else 
            {
                palindrome=false;
                break;
            }
    }
    if(palindrome==true)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
