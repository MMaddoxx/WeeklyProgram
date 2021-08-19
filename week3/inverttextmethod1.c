#include<stdio.h>
#include<string.h>
int main()//ใช้วิธีprintจากด้านหลังมาหน้า
{
    char text[99];
    int i;
    printf("Input text : ");
    scanf("%[^\n]s",text);
    printf("Your invert text is ");
    for(i=strlen(text)-1;i>=0;i--)
    {
        printf("%c",text[i]);
    }
}