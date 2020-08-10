/*
内核，有输出的缓冲区
      1. \n 会将缓冲区内容 推送到屏幕
      2. 程序结束，缓冲区内容 一次性推到屏幕
      3. 缓冲区满了
      4.
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
