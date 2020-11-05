#include <stdio.h>
void print_star();//预先声明函数
int main()
 {
   // int a[4] = {1,2,3,4};
   // printf("%d\n", a[2]);
   // return 0;
   print_star(); //using the function in main function
   printf("first print\n");
   print_star();
   printf("second print\n");
   print_star();
   return 0;
 }
void print_star()//定义函数，c语言不支持在内部定函数
 {
   for (int  i = 0; i <= 5; i++ )
   {
     for (int j = 0; j <= i; j++)
     {
       printf("*");
     }
     printf("\n");

   }
 }
