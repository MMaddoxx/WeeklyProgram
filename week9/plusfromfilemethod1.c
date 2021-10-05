#include<stdio.h>//จงเขียนโปรแกรมหาค่า x + y โดยรับมาจาก “a.txt” และแสดงใน “b.txt”
int main()
{
    FILE *fp;
    int a,b;
    fp=fopen("mytextfile.txt","r");
    fscanf(fp,"%d %d",&a ,&b);
    printf("Sum = %d",a+b);
}