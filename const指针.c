#include<stdio.h>
int main()
{
    int b = 30;
    int c = 0;
    int * const pb = &b;
    pb = &c;
    
    printf("*pb = %d\n",*pb);
    return 0;
}