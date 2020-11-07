#include<stdio.h>
#include<unistd.h>
void print_star(int n);
void print_star(int n)
{
    printf("start n = %d *\n",n);
    sleep(1);
    if(n>0)
    {
        print_star(n-1);
        printf("end n = %d \n",n);
    }
    else
    {
        printf("end n = %d \n",n);
        return ;
    }
}

int main()
{
    print_star(6);
    return 0;
}