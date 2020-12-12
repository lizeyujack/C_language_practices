#include <stdio.h>
int main()
{
    char a[13] = "hello world!";
    for(int i = 0; i<13; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");


    //convert "hello world!" to "Hello world"
    a[0] = 'H';
    for(int i = 0; i<13; i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}