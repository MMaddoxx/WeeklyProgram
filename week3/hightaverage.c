#include<stdio.h>
int main()
{
    int h[10],a=1,i;
    float sum=0;
    for(i=0;i<10;i++)
    {
        printf("Input Hight of student number %d : ",a);
        a++;
        scanf("%d",&h[i]);
    }
    a=1;
    for(i=0;i<10;i++)
    {
        printf("Hight of student number %d is %d\n",a,h[i]);
        a++;
        sum=sum+h[i];
    }
    printf("Average Hight is %.2f",sum/10);
}