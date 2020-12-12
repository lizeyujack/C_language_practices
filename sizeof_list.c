/*
数组名与指针的区别：
1. 数组名是常指针 不能修改
2. sizeof 计算数组名 为数组的所有字节
3.指针可以作为函数的返回值，但是数组不可以。
*/
#include <stdio.h>
int main()
{
    int a[5] = {0};
    int *pa = a;
    printf("sizeof(a) = %d\n",sizeof(a));
    printf("sizeof(pa) = %d\n",sizeof(pa));
    return 0;
}