# pointer
> THINK CHANGE DO
- 指针变量 存储地址的变量。
- 整型变量 ```int i;```
- 声明指针变量 ```int *p```声明快乐一个int型的指针变量p   里面存储的地址 指向一个int型的变量。
- 例子：
```c
    int *p1;
    int i = 20;
    p1 = &i;
```
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

## 指针的作用

```c
#include<stdio.h>
void func(int *p);
void func(int *p)
{
    int *p2 =  p;
    *p2 = 30;
    printf("func函数中 *p2 = %d\n",*p2);
}
int main()
{
    int *p1;
    int i = 20;
    p1 = &i;
    printf("main函数中 调用前i = %d\n",i);
    func(p1);
    printf("main函数中调用后 调用后 i = %d\n",i);
    return 0;
}
```
- 指针可以修改变量作用域外面的值。
```c
int *p;
*p = 20;//野指针。声明一个指针变量，但是没有给他确定的位置。需要避免。
```
-避免野指针的方法：
1. 初始的时候指定确定的地址: ```int *p = i;```
2. 初始的赋值为NULL: ```int *p = NULL```


调用 ，声明， 定义

函数的组成：
返回值  函数名（参数）
{
    函数体
}

返回值只能返回一个变量
不能返回数组

函数的参数传递机制：-值传递（无法对函数外的变量进行修改）

- 函数的结束
    - 在遇到return语句的时候结束
    - 执行到最后一条语句的时候结束
    - return 0;

void型函数不需要返回值
```c
void()
{
    if()
    {
        exit(0);//结束程序
    }
    else()
    {
        ....
    }
}
```
如果if条件判断为真，那么执行完if之后就会结束函数。但是如果加上exit(0)，可以告诉系统，该 程序为正常结束的。
```c
#include<stdio.h>
void swap(int *a, int *b);
void swap(int *a, int *b)
{
    // int *temp = a;
    // a = b;
    // b = temp;
    int d = 0;
    int *c = &d;
     *c = *a;
     *a = *b;
     *b = *c;
}
int main()
{   int a = 2;
    int b = 3;
    // int *p1 = NULL;
    // int *p2 = NULL;
    printf("交换前 p1的地址为 %d\n",a);//print the add of p1
    printf("交换前 p2的地址为 %d\n",b);//print the add of p2
    swap(&a,&b);
    printf("交换后 p1的地址为 %d\n",a);//print the add of p1
    printf("交换后 p2的地址为 %d\n",b);//print the add of p2
        
}
```
- output
```bash
PS D:\Learn\C++学习\github\C_language_practices> cd "d:\Learn\C++学习\github\C_language_practices\" ; if ($?) { gcc tempCodeRunnerFile.c -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile } 
交换前 p1的地址为 2
交换前 p2的地址为 3
交换后 p1的地址为 3
交换后 p2的地址为 2
```