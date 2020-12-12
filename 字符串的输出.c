/*
字符串的输出
*/
#include <stdio.h>
int main()
{
    char *str ="abcdef";
    char a[] = "hello world!";//初始化系统会在后面加"\0"
    str = a;
    printf("str = %s\n",str);
    printf("a = %s\n",a);
    printf("sizeof(a) = %d\n",sizeof(a));//13
    printf("input str value:~~~~~~~~~~~~~~~~~~~~~~~~\n");
    // scanf("%d",str);
    // printf("%s",str);
    //scanf("%s",a);//输入字符串遇到有空格或者回车符号会结束
    gets(a);//不会因为空格而被终端。但是不可以对缓冲区进行越界。
    printf("a = %s",a);
    return 0;
}