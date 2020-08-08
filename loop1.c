/*
author:lizeyujack
date:8-08-2020
operation: try "break"
*/
#include<stdio.h>
#include<unistd.h>
int main()
{
  int sec = 10;
  for(;;)
  {
    printf("%d\n",sec);
    sleep(1);
    sec--;
    if(sec == 0)
    {
      printf("发射\n");
      break //跳出循环
    }
  }
 return 0;
}
