#include<stdio.h>
int main()
{
    int num,i=0;
    printf("Please enter based 10 number : ");
    scanf("%d",&num);
    char ans[num];
    if(num==0)//ถ้าuserดันใส่ 0 
    {
        ans[i]='0';
        i++;//ต้องบอกเพิ่มมไ่งั้นloopหน้าจะติดลบ
    }
    else
    {
        while(num!=0)//จะมีการloopไปเรื่อยๆแล้วจะมีตัวสุดท้ายที่หารแล้วกลายเป็น0จะงจะจบloop
        {
            if(num%2==0)
            {
                ans[i]='0';
                i++;//เอาไว้นับค่าi
                num=num/2;
            }
            else 
            {
                ans[i]='1';
                num=(num-1)/2;
                i++;
            }
        }
    }
    printf("Your based 2 number is ");
    for(i-1;i-1>=0;i--)//ต้องprintย้อนกลับเพราะเมื่อหารได้เลขฐาน2เสร็จจะต้องย้อนกลับ
    {
        printf("%c",ans[i-1]);
    }
}