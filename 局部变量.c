#include<stdio.h>
int func();
int func()
{
    int a = 3;
    printf("a = %d\n",a);
    return a;
}
int main()
{
    int a = 5;
    printf("%d\n",func());
    printf("%d\n",a);
    return 0;
}