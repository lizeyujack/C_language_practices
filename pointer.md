# pointer
> THINK CHANGE DO
- 指针变量 存储地址的变量。
- 整型变量 ```int i;```
- 声明指针变量 ```int *p```声明快乐一个int型的指针变量p   里面存储的地址 指向一个int型的变量。
![pointer](./picture/pointer.png)
```c
//指针
#include<stdio.h>
int main()
{
    int i = 20;
    printf("i 地址是%p\n",&i);//& 取i变量的地址
    int *p = &i;//声明一个整形指针变量，存储i变量的地址
    printf("p=%x\n",p);//输出p内的值 16进制-
    printf("i = %d\n",*p); //* 取指针变量所指向的内存的值
    return 0;
}
```
输出
```bash
PS D:\Learn\C++学习\github\C_language_practices> cd "d:\Learn\C++学习\github\C_language_practices\" ; if ($?) { gcc tempCodeRunnerFile.c -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
i 地址是0061FF18
p=61ff18
i = 20
```
- p中存放的是a变量的地址编号。
