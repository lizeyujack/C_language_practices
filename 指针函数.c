#include<stdio.h>
void func(int b[]);
void func(int b[])
{
    for(int i = 0; i<5; i++)
    {
        b[i] = i;
    }
}
int main()
{
    int a[5] = {10,20,30,40,50};
    func(a);
    for(int i = 0; i<5; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}