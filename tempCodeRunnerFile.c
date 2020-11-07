#include<stdio.h>
#include<unistd.h>
int jia(int n);
int jia(int n)
{
    if(n==1)
    {
        printf("1\n");
        return 1;
    }
    else
    {
        printf("%d +",n);
        fflush(stdout);
        sleep(1);
        return n+jia(n-1);
    }   
}

int main()
{
    printf("5+4+3+2+1 = %d",jia(5));
    return 0;
}