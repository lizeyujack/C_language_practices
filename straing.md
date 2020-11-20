# string
const constant 永恒的,只读的
1. const用来修饰普通变量:```const int i = 0;```声明变量i，并且i制度

```c
//试图修改只读型变量
#include<stdio.h>
int main()
{
    const int i = 0;
    i = 5;
    printf("%d",i);
    return 0;
}
```
- ERROR
```bash
tempCodeRunnerFile.c: In function 'main':
tempCodeRunnerFile.c:5:7: error: assignment of read-only variable 'i'
    5 |     i = 5;
      |       ^
```
- 可以提高程序的灵活性和可移植性
```c
#include<stdio.h>
int main()
{
    int b = 30;
    int c = 0;
    int * const pb = &b;//永远指向pb，pb为声明为只读
    pb = &c; // 常指针 不能赋值
    printf("*pb = %d\n",*pb);
    return 0;
}
```
- error
```bash
tempCodeRunnerFile.c: In function 'main':
tempCodeRunnerFile.c:7:8: error: assignment of read-only variable 'pb'
    7 |     pb = &c;
      |        ^
```