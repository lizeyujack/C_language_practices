#include <stdio.h>
void swap(int a,int b);
void swap(int a,int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 20;//main函数中的局部变量
    int b = 30;
    printf("a = %d  b = %d\n",a,b);
    swap(a,b);
    printf("a = %d  b = %d\n",a,b);//a = 20 b  = 30
    return 0;
}


