#include <stdio.h>
int max();
int max(int a,int b)
{
    if (a >= b)
    {
        return a;
    }
    if (a < b)
    {
        return b;
    }    
}

int main()
{
    int num1, num2;
    printf("please input number1:\n");
    scanf("%d",&num1);
    printf("please input number2:\n");
    scanf("%d",&num2);
    printf("the biggest number among a and b is : %d\n",max(num1,num2));
    return 0;
}