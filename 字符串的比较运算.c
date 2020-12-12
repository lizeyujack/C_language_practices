#include <stdio.h>
#include <string.h>
int main()
{
    char *pa = "abcd";
    char *pb = "ABCD";
    int a = strcmp(pb,pa);//比较字符串的大小的函数
    printf("a = %d\n",a);
    return 0;
}