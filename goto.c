#include<stdio.h>
int main(){
      int i = 0;
      label:
          if(i < 5)
                {
                  printf("hello\n");
                  i++;
                  goto label;
                }
      over:
          return 0;
}
