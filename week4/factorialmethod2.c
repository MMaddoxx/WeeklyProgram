#include<stdio.h>
#include<conio.h>
long factorial(int a)
{
    long ans=1;
    int i;
    if(a==0)
    {
        return 1;
    }
    else 
    {
        for(i=1;i<=a;i++)
        {
            ans=ans*i;
        }
        return ans;
    }
}
int main()
{
    long fact;
    int num;
    printf("Enter number for factorial calculation : ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of %d is %ld",num,fact);
    getch();
}