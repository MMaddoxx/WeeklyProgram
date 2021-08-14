#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,di=0;
    float sum=0,mone,q,change;
    char mem;
    printf("====================Doi Fah Shop========================\n");
    printf("Please select item of products\n");
    printf("[1] Coffee (35.00B) [2] Rice (150.00B) [3] Tea (135.00B)\n");
    printf("[4] Milk(45.00B) [5] Orange juice (25.00B) [0] Quit\n");
    printf("========================================================\n");
    do
    {
        printf("Enter item of menu => ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        printf("Enter of quantity => ");
        scanf("%f",&q);
        if(n==1)
        {
            sum=sum+(35*q);
        }
        if(n==2)
        {

            sum=sum+(150*q);
        }
        if(n==3)
        {
            sum=sum+(135*q);
        }
        if(n==4)
        {
            sum=sum+(45*q);
        }
        if(n==5)
        {
            sum=sum+(25*q);
        }
    } while (n>=0);
    printf("Total price %.2f\n",sum);
    if(sum>=1000)
    {
        printf("Surprise! You get promotion 10%% (If you buy over than 1,000B\n");
        di=0.1;//เพิ่มส่วนลด10%
    }
    do
    {  
        printf("Are you member of Doi Fah shop (y/n)=> ");
        mem=getche();
        if(mem=='n')
        {
            sum=sum*(1-di);
            break;
        }
        if(mem=='y')
        {
            sum=sum*(1-di-0.05);
        }
        else 
        {
            printf("\nSorry Try again!\n");
        }
    } while (mem!='y');
    printf("\nAmount price = %.2f\n\n",sum);
    do
    {
        printf("Please paying (More than amount of prices) => ");
        scanf("%f",&mone);
        if(sum>mone)
        {
            printf("Please Try Again!");
        }
    } while (sum>mone);
    change=mone-sum;
    printf("Money for change = %.2f\n",change);
        //เช็ตแบ้งค์1000
        a=change/1000;
        printf("Bank(1,000) = %d\n",a);
        change=change-(a*1000);
        //เช็ตแบ้งค์500
        a=change/500;
        printf("Bank(500) = %d\n",a);
        change=change-(a*500);
        //เช็ตแบ้งค์100
        a=change/100;
        printf("Bank(100) = %d\n",a);
        change=change-(a*100);
        //เช็ตแบ้งค์50
        a=change/50;
        printf("Bank(50) = %d\n",a);
        change=change-(a*50);
        //เช็ตแบ้งค์20
        a=change/20;
        printf("Bank(20) = %d\n",a);
        change=change-(a*20);
        //เช็ตเหรียญ10
        a=change/10;
        printf("Coin(10) = %d\n",a);
        change=change-(a*10);
        //เช็ตเหรียญ5
        a=change/5;
        printf("Coin(5) = %d\n",a);
        change=change-(a*5);
        //เช็ตเหรียญ1
        a=change/1;
        printf("Coin(1) = %d\n",a);
        change=change-(a*1);
        //เช็ตเหรียญ50สตรงค์
        a=change/0.5;
        printf("Coin(0.5) %d\n",a);
        change=change-(a*0.5);
        //เช็ตเหรียญ25สตรงค์
        a=change/0.25;
        printf("Coin(0.25) %d\n",a);
        change=change-(a*0.25);
    printf("Thank you ... see you again");
}
    