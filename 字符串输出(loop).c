#include <stdio.h>
int main()
{
    char *str = "abcdef";
    while(*str != 0)
    {
    printf("%c",*str);
    str++;
    }
    printf("\n");
    return 0;
}