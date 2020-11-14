#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    char c[5];
    int *pa = a;
    char *pc = c;
    //打印数组a中各个元素的地址：
    for(int i = 0; i < 5;i++)
    {
        printf("a[%d]的地址为：%p\t",i,&a[i]);
    }
    printf("\n");
    for(int i = 0; i < 5;i++)
    {
        printf("  pa的地址为：%p\t",&pa);
        pa++;
        // printf("a[%d]的地址为：%p\t",i,&a[i]);
    }
    printf("\n");
    //打印数组c中各个元素的地址：
    for(int i = 0; i < 5;i++)
    {
        printf("c[%d]的地址为：%p\t",i,&c[i]);
    }
    printf("\n");
    for(int i = 0; i < 5;i++)
    {
        printf("  pc的地址为：%p\t",&pc);
        pa++;
        // printf("a[%d]的地址为：%p\t",i,&a[i]);
    }
    return 0;
}