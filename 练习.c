#include<stdio.h>
void input(int a[],int len);
void output(int a[],int len);
int max(int a[],int len);
float avg(int a[],int len);

void input(int a[],int len)
{
    int *p = a;
    for(int i = 0; i< len; i++)
    {
        printf("输入一个数字: ");
        scanf("%d",p+i);
    }
}

void output(int a[],int len)
{
    int *p = a;
    printf("[");
    for(int i = 0; i< len; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("]");
}

int max(int a[],int len)
{
    int max = a[0];
    for(int i = 1; i< len-1; i++)
    {
        if(max <= a[i])
        {
            max = a[i];
        }
    }
    return max;
}

float avg(int a[],int len)
{
    int sum = 0;
    float avg = 0;
    for(int i = 0; i < len; i++)
    {
        sum += a[i];
    }
    avg = sum/len;
    return avg;
}

int main()
{
    int a[5];
    input(a,5);
    output(a,5);
    printf("\nmax = %d\n",max(a,5));
    printf("avg = %f\n",avg(a,5));
    return 0;
}