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
