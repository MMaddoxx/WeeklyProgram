#include<stdio.h>//จงเขียนโปรแกรมหาค่า x + y โดยรับมาจาก “a.txt” และแสดงใน “b.txt”
int main()
{
    FILE *fp,*fp1;
    int a,b;
    fp=fopen("a.txt","r");
    fscanf(fp,"%d %d",&a ,&b);
    fp1=fopen("b.txt","w");
    fprintf(fp1,"%d",a+b);
    fclose(fp);
    fclose(fp1);
}