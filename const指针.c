#include<stdio.h>
int main()
{
    int b = 30;
    int c = 0;
    int * const pb = &b;//不能修改pb指针的信息
    const int * pb = &b;//不能修改pb指针指向的值
    const int const * pb = b;//同时符合上述两个条件
    pb = 10;
    printf("*pb = %d\n",*pb);
    return 0;
}