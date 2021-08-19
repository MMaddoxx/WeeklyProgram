#include<stdio.h>
#include<string.h>
int main()//ใช้วิธีสลับstring 
{
    char text[99],a;
    int i;
    printf("Enter text : ");
    scanf("%[^\n]s",text);
    for(i=0;i<=(strlen(text)-1)/2;i++)
    {
        a=text[i];//เอามาฝากไว้ที่a
        text[i]=text[strlen(text)-1-i];//สลับ
        text[strlen(text)-1-i]=a;//เอาตัวที่ฝากไว้มาใส้่
    }
    printf("Your invert text is %s",text);
}