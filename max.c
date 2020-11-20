#include<stdio.h>
int main()
{
    int a[5] = {5,4,3,2,1};
    int max = a[0];
    // printf("%d\n",a[5]);
    for(int i = 0; i< 5; i++)
    {
        // printf("%d\n",i);
        if(max <= a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
}