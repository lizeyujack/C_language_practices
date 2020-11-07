#include<stdio.h>
int i = 0;
void func()
{
    static int i = 0;
    i++;
    printf("该函数被调用了%d次\n",i);
    printf("静态变量i的地址为： %p\n",&i);
}
int main()
{
    func();
    func();
    func();
    func();
    return 0;
}