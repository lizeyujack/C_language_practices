//指针
#include<stdio.h>
int main()
{
    int i = 20;
    int c = 30;
    int b = 40;
    printf("i 地址是%p\n",&i);//& 取i变量的地址
    int *p = &i;//声明一个整形指针变量，存储i变量的地址
    printf("p=%x\n",p);//输出p内的值 16进制-
    printf("i = %d\n",*p); //* 取指针变量所指向的内存的值
    //通过指针变量p 修改i的值 

    c = *p; //等价于c = i
    printf("c = %d\n",c);

    *p = b;
    printf("*p = %d\n",i);
    return 0;
}