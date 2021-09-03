#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[3],i;
    printf("Enter 3 numbers for finding sum of 2 greatest number : ");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&num[i]);
    }
    if((num[0]>=num[1]&&num[1]>=num[2])||(num[1]>=num[0]&&num[0]>=num[2]))
    {
        printf("Sum Of 2 greatest number is %d",num[0]+num[1]);
        exit(0);
    }
    if((num[0]>=num[2]&&num[2]>=num[1])||(num[2]>=num[0]&&num[0]>=num[1]))
    {
        printf("Sum Of 2 greatest number is %d",num[0]+num[2]);
        exit(0);
    }
    if((num[1]>=num[2]&&num[2]>=num[0])||(num[2]>=num[1]&&num[1]>=num[0]))
    {
        printf("Sum Of 2 greatest number is %d",num[2]+num[1]);
        exit(0);
    }
    if((num[0]>=num[2]&&num[2]>=num[1])||(num[2]>=num[0]&&num[0]>=num[1]))
    {
        printf("Sum Of 2 greatest number is %d",num[0]+num[2]);
        exit(0);
    }
}