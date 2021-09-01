#include<stdio.h>
#include<conio.h>
float num[3];
void accendingorder(float num[3]);
int main()
{
    printf("Enter 3 number to find sum of two greatest number : ");
    scanf("%f %f %f",&num[0],&num[1],&num[2]);
    accendingorder(num);
    getch();
    return 0;
}
void accendingorder(float num[3])
{
    int i,j;
    float a;
    for (i = 0; i < 3; i++)//เรียงจากมากไปหาน้อย
    {
        for (j = i + 1; j < 3; j++)
        {
            if (num[i] > num[j])
            {
                a =  num[i];
                num[i] = num[j]; 
                num[j] = a;
            }
        }
    }
    printf("The Sum of greatest number is %.2f\n",num[2]+num[1]);
    printf("Press any key to quit");
}
