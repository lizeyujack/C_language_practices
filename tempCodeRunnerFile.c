#include<stdio.h>
int a = 30;
int b = 20; 

void swap()
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}

int main()
{
    swap();
    return 0;
}