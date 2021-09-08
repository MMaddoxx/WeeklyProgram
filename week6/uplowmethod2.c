#include<stdio.h>
#include<string.h>
int uppercheck();
int lowercheck();
int main()
{
    char text[100];
    printf("Enter text : ");
    scanf("%s",text);
    printf("There is %d uppercase and %d lowercase",uppercheck(text),lowercheck(text));
}
int uppercheck(char text[100])
{
    int i,count=0;
    for(i=0;i<=strlen(text);i++)
    {
        if(text[i]>='A'&&text[i]<='Z')
        {
            count++;
        }
    }
    return count;
}
int lowercheck(char text[100])
{
    int i,count=0;
    for(i=0;i<=strlen(text);i++)
    {
        if(text[i]>='a'&&text[i]<='z')
        {
            count++;
        }
    }
    return count;
}