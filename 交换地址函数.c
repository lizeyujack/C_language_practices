#include<stdio.h>
void swap(int *a, int *b);
void swap(int *a, int *b)
{
    // int *temp = a;
    // a = b;
    // b = temp;
    int d = 0;
    int *c = &d;
     *c = *a;
     *a = *b;
     *b = *c;
}
int main()
{   int a = 2;
    int b = 3;
    // int *p1 = NULL;
    // int *p2 = NULL;
    printf("交换前 p1的地址为 %d\n",a);//print the add of p1
    printf("交换前 p2的地址为 %d\n",b);//print the add of p2
    swap(&a,&b);
    printf("交换后 p1的地址为 %d\n",a);//print the add of p1
    printf("交换后 p2的地址为 %d\n",b);//print the add of p2
        
}