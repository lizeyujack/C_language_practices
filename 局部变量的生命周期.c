#include<stdio.h>
int func1();
int func2();

int func1()
{
    // int i = 0;
    // printf("i的地址是%p\n",&i);
    // b = 0;
    // c = 0;
    func2();
    return 0;
}

int func2()
{
    int i = 0;
    printf("i的地址是%p\n",&i);
    return 0;
}

int main()
{
    int a =1;
    func2();
    func1();
    return 0;
}