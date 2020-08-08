# C_language_practices
self_learning about language C++
# 学习c语言中的loop（循环）
循环的嵌套：多层循环
```c
#include<stdio.h>
int main()
{
  for(int i = 1; i <= 5; i++)
  {
    printf("%d ",i);
  }
  return 0;
}
```
output:
```bash
1 2 3 4 5
Press any key to continue . . .
```
如果想打印多行的值，例如下图，则需要用到多层循环：
```bash
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```
```c
#include<stdio.h>
int main()
{
  for(int i = 1; i <= 5; i++)
  {
    for(int j = 1; j <= 5; j++)
    {printf("%d ",j);}
    printf("\n");
  }
  return 0;
}
```
如果打印
```bash
#include<stdio.h>
int main()
{
  for(int i = 1; i <= 5; i++)
  {
    for(int j = 1; j <= i; j++)
    {printf("%d ",j);}
    printf("\n");
  }
  return 0;
}
```
可以将j的数量控制为i的数量，
```c
#include<stdio.h>
int main()
{
  for(int i = 1; i <= 5; i++)
  {
    for(int j = 1; j <= i; j++)//打印i次
    {printf("%d ",j);}
    printf("\n");
  }
  return 0;
}
```
