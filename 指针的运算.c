#include<stdio.h>
int main()
{
    int a = 1;
    char b = 2;
    int c = 3;
    int *pa = &a;
    char *pb = &b;
    printf("sizeof(pa) = %d\n",sizeof(pa));
    printf("sizeof(pb) = %d\n",sizeof(pb));
    return 0;
}