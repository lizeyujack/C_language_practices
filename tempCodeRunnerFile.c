#include <stdio.h>
int main()
{
    int a[5] = {0};
    int *pa = a;
    printf("sizeof(a) = %d\n",sizeof(a));
    printf("sizeof(pa) = %d\n",sizeof(pa));
    return 0;
}