#include<stdio.h>
int main()
{
    int num[3],i,j,a;
    printf("Enter number 1 : ");
    scanf("%d",&num[0]);
    printf("Enter number 2 : ");
    scanf("%d",&num[1]);
    printf("Enter number 3 : ");
    scanf("%d",&num[2]);
    for (i = 0; i < 3; i++) 
    {
        for (j = i + 1; j < 3; j++)
        {
            if (num[i] > num[j])//ถ้าตัว 1 มากกว่าตัว 2 ให้สลับตัว 1 กับตัว 2 (j>i)
            {
                a =  num[i];//เอา num[i] ไปเก็บที่ a
                num[i] = num[j]; //เอา num[j] ที่น้อยกว่า num[i](ตัวข้างหน้า)ไปใส่แทนที่ที่num[i]
                num[j] = a;//เอา a ไปใส่ที่ num[j]
            }
        }
    }
    printf("%d is the greatest number",num[2]);
}