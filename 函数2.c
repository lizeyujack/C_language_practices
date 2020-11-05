#include <stdio.h>
void add();//声明函数原型
int main()
{
	add();
	return 0;
}

void add()//定义，这里没有分号
{
	int a;
	printf("2+3 = %d\n",a=2+3);
}