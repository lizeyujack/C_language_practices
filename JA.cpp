/*
#include <stdio.h>
int main()
{
	int a=0;
	char op = 0;
	int b=0;
	printf("input :\n");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+':
			printf("%d %c %d = %d",a,op,b,a+b);
			break;
		case '*':
			printf("%d %c %d = %d",a,op,b,a*b);
			break;
		case '-':
			printf("%d %c %d = %d",a,op,b,a-b);
			break;
		case '%':
			printf("%d %c %d = %d",a,op,b,a%b);
			break;
		default:
			printf("wrong!");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int i;
	for(i = 1; i < 21; i++)
	{
		printf("i^2 = %d\n",i*i);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	char c = 0;
	for(c='a';c<='z';c++)
	{
		printf("%c\n",c);
	}
	return 0;
}*/

//password.c
//author:zeyu
//date:2020-08-2

#include <stdio.h>
int main()
{
	int c=0;
	for(;c != 123456;)
	{
	printf("input your password:\n");
	scanf("%d",&c);
	if(c != 123456)
	{
		printf("wrong!\n");
	}
    }
printf("congrutes!\n");
return 0;
}
