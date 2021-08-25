#include<stdio.h>
#include<conio.h>
long factorial(int n)
{
    int ans;
    if(n==0)
    { 
        return 1;
    }
    else 
    {
        ans=n*factorial(n-1);
        return ans;
    }
}
int main()
{
    int n;
    long func;
    printf("Enter number for factorial calculation :");
    scanf("%d",&n);
    func=factorial(n);
    printf("Factorial of %d is %ld",n,func);
    getch();
}