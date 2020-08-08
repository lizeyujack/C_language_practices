/*
author:lizeyujack
date:8-08-2020
operation:print tiktok...
*/
#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main(){
 for(;;){
         printf("sec = %lu\n",time(0));
         sleep(1);
        }
          return 0;
}
