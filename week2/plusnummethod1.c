#include<stdio.h>//64011160 นนทัช มุกลีมาศ 
int main()
{
    int num[3],i;
    for(i=0;i<=2;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    if(num[0]>num[1]&&num[0]>num[2])//ใช้วิธีเปรียบเทียบทีละตัว
    {
        printf("%d is the greatest number",num[0]);
    }
    else if(num[1]>num[0]&&num[1]>num[2])
    {
        printf("%d is the greatest number",num[1]);
    }
    else if(num[2]>num[0]&&num[2]>num[1])
    {
        printf("%d is the greatest number",num[2]);
    }
}