#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char text[100],mem[100];
    bool palindrome;
    bool stop=false;
    printf("Enter text to check if it a palindrome : ");
    scanf("%s",text);
    for(int i=0;i<strlen(text);i++)
    {
        mem[strlen(text)]='\0';
        mem[i]=text[i];
        if(text[i]>='A'&&text[i]<='Z')
        {
            text[i]=text[i]+32;
        }
        else if(text[i]<'a'||text[i]>'z')
        {
            stop=true;
            break;
        }
    }
    if(stop==false)
    {
        for(int i=0;i<(strlen(text))/2;i++)
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