C_language_practices
self_learning about language C++
### 学习c语言中的loop（循环）
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
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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
### 另外一种方式执行代码，就是使用goto语句/由于goto语句过于灵活，所以不建议经常使用🕴
```
#include<stdio.h>
int main(){
      int i = 0;
      label:
          if(i < 5)
                {
                  printf("hello\n");
                  i++;
                  goto label;//直接转到label中
                }
      over://if条件不成立的时候执行
          return 0;
}
```
### 缓冲区不会自动清理，所以有的时候会导致代码的逻辑和实际并不一致
```
/*
内核，有输出的缓冲区
      1. \n 会将缓冲区内容 推送到屏幕
      2. 程序结束，缓冲区内容 一次性推到屏幕
      3. 缓冲区满了
*/
#include<stdio.h>
#include<unistd.h>
int main(){
  int x = 0;
  for(int i=0;i<5;i++)
  {
    printf("i=%d ",i);
    fflush(stdout);//手动清缓冲区。。
    sleep(1);
  }
  return 0;
}
```
### 解决输入字符的时候错误的问题：
```
#include<stdio.h>
#include<unistd.h>
int main(){
  int x = 0;
  char c = 0;
  for(int i=0;i<5;i++)
  {
    printf("输入一个字符:");
    scanf("%c",&c);
    printf("c = %c\n",c);
    //清输入缓冲区
    scanf("%*[^\n]");//清 \n之前的
    scanf("%*c");//清 \n 若注释掉这两行，则会连续弹出两个 提示语句。。
    sleep(1);
  }
  printf("\n");
  return 0;
}
```
