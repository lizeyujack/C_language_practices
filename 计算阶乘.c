#include<stdio.h>
int fact(int n);
int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
printf("5 的阶乘 = %d \n ",fact(5));
return 0;
}