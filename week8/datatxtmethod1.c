#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char text[100];
    bool notstop=true;
    FILE* fp;
    fp=fopen("c:\\temp\\data.txt","w");//ต้องสร้างfolder temp ขึ้นมาก่อน
    do
    {
        printf("Input text : ");
        scanf("%s",text);
        if(text[0]=='.'&&strlen(text)==1)
        {
            notstop=false;
        }
        else
        {
            fprintf(fp,"%s\n",text);
        }
    } while (notstop==true);
    fclose(fp);
}