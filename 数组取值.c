#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int *pa = a;

    for(int i = 0; i<5; i++)
    {
        //printf("*pa++=%d\n",*pa++);
        //printf("*(pa+%d) = %d\n",i,*(pa+i));
        //printf("pa[%d] = %d\n",i,pa[i]);
        printf("*(a+%d)=%d\n",i,*(a+i));
    }
    return 0;
}