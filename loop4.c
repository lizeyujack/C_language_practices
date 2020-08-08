/*
随机数 产生函数 rand()
设置随机的种子 srand();
猜一个iphone的价格
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int price = 0;
  int i = 0;
  price = rand()%1000 + 8000;
  for(;;)
  {
  printf("猜一猜手机的价格(8000-9000之间):\n")；
  scanf("%d",&i);
  if(price > i)
  {
    printf("猜di了");
  }
  else if(price < i)
  {
    printf("猜gao了");
  }
  else
  {
    printf("恭喜答对了")
    break;
  }
  }

  return 0;
}
