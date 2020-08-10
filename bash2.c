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
    scanf("%*[^\n]");
    scanf("%*c");
    sleep(1);
  }
  printf("\n");
  return 0;
}
