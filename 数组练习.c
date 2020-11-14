#include<stdio.h>
void input(int a[],int n);
void input(int a[],int n)
{
    for(int i=0;i<5;i++)
    {
        printf("input each dibit here:\n")
        scanf("%d",&a[i]);
    }
}

int main()
{
    int a[5];
    input(a,5);//输入成绩
    // output(a,5);//打印5个人的成绩
    // printf("max = %d\n",max(a,5));
    // printf("avg = %f\n",avg(a,5));
    return 0;
}