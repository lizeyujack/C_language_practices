#include<stdio.h>
int g_i = 0;
int func();
int func2();
int func()
{
    g_i++;
    return 0;
}
int func2()
{
    int g_i;
    g_i = 5;
    return 0;
}

int main()
{
    printf("g_i = %d\n",g_i);//0
    func();
    printf("g_i = %d\n",g_i);//1
    func2();
    printf("g_i = %d\n",g_i);//5?
    return 0;
}