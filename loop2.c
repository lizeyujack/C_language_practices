/*
author:lizeyujack
date:8-08-2020
operation:try "continue"
*/
#include<stdio.h>
#include<unistd.h>
int main()
{
  int sec = 11;
  for(;;)
  {
    sleep(1);
    sec--;
    if(sec%3 == 0)
    {
      continue; //3的整数倍，结束本次循环，并重新开始新的循环。。
    }
    printf("%d\n",sec);
  }
 return 0;
}
