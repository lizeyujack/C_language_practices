#include<stdio.h>
int main(){
char c = 0x53;
for(int i = 7; i > 0;i--)
{
  if(c & 0x1 << i)
  {
    printf("1");
  }
  else{
    printf("0");
  }
}
printf("\n0x%x",c);
return 0;
}
