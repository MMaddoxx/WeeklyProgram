#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char text[100];
    bool writing=true;
    FILE* fp;
    fp=fopen("c:\\temp\\data.txt","w"); 
    do
    {
        printf("Input text : ");
        scanf("%s",text);
        if(text[0]=='.'&&strlen(text)==1)
        {
            writing=false;
        }
        else 
        {
            fwrite(text,sizeof(text),1,fp);
        }
    } while (writing);
    fclose(fp);
}