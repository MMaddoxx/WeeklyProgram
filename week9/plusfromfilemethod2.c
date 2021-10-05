#include<stdio.h>
FILE *fp,*fp1;
int a,b;
void openfile();
void writefile();
int main()
{
    openfile();
    writefile();
    fclose(fp);
    fclose(fp1);
}
void openfile()
{
    fp=fopen("a.txt","r");
    fscanf(fp,"%d %d",&a ,&b);
}
void writefile()
{
    fp1=fopen("b.txt","w");
    fprintf(fp1,"%d",a+b);
}