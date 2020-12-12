#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = {0};
    char *pa = "hello world\n";
    char *pb = NULL;
    // pb = pa;
    strcpy(a,pa);//将pa复制到a中
    printf("pa = %s",pa);//pb = hello world
    printf("a = %s",a);
    return 0;
}     