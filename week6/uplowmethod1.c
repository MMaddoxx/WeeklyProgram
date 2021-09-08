//จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความแล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีตัวอักษรตัวพิมพ์ใหญ่กี่ตัว ตัวพิมพ์เล็กกี่ตัว
#include<stdio.h>
#include<string.h>
int main()
{
    int i,upper=0,lower=0;
    char text[100];
    printf("Enter text : ");
    scanf("%s",text);
    for(i=0;i<strlen(text);i++)
    {
        if(text[i]>='A'&&text[i]<='Z')
        {
            upper++;
        }
        else 
        {
            lower++;
        }
    }
    printf("There are %d uppercase and %d lowercase ",upper,lower);
}