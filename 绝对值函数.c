#include <stdio.h>
// #include <stlib.h>
int myabs(int num);//声明函数
int main()
{
    int num = 0;
    int num_abs = 0;
    printf("please input a number:");
    scanf("%d",&num);
    num_abs = myabs(num);
    printf("|%d| = %d\n",num,num_abs);
    printf("main函数中num的值为%d\n",num);
    printf("main函数中num的地址为%d\n",&num);
    return 0;
}

int myabs(int num)//定义函数
{
    if (num < 0)
    {
        num = -num;
    }
    printf("函数中num的值为%d\n",num);
    printf("函数中num的地址为%d\n",&num);
    return num;
 } 