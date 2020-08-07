/*
#include <stdio.h>
int main()
{
	int reg = 0x0f;
	
//	reg = reg | 1 << 6;
	reg = reg & ~(1<<6);
	
	printf("reg = 0x%x\n",reg);
	return 0;
}
*/

//condition1 ? condition2 : condition3

/*
#include <stdio.h>
int main()
{
	int num = 0;
	int r = 0;
	printf("input a number\n");
	scanf("%d",&num);
	printf("\n");	
	r = (num>=0 && num<=100)?printf("correct"):printf("wrong");

	return 0; 
 } 
 */
 
/*
#include <stdio.h>
int main()
{

	int a = 0;
	printf("input the remain value of your traffic card\n");
	scanf("%d",&a);
	//(a>=3)?printf("You can go\n"):printf("please toll up\n");
	if(a >= 3)
	{
		printf("You can go\n");
	}
	else
	{
		printf("please toll up\n");
	}

	return 0;
}*/ 

/*
#include <stdio.h>
int main()
{
	char a = 0;
	printf("input a alphabate\n");
	scanf("%c",&a);
	if (a>=97 && a <= 122)
	{
		a = a - 32;
	}
	printf("%c\n",a);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a = 0;
	int price = 0;
	printf("input a value standed for the distance\n");
	scanf("%d",&a);
	if(a <= 3 && a>0)
	{
		price = 10;
	}
	else
	{
		price = 10 + 2 * (a-3);
	}
	printf("%d",price);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int a = 0;
	printf("please input a number:\n");
	scanf("%d",&a);
	if(a > 0)
	{
		printf("positive\n");
	}
	if(a<0)
	{printf("negative\n");
	}
	if(a == 0)
	{
		printf("a equals to '0'");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a=0;
	printf("input a marks:\n");
	scanf("%d",&a);
	if(a>=0 && a<=59)
	{
		printf("Your Level is C");
	}
	else
	{
		if(a>=60 && a<79)
		{
			printf("Your Level is B\n");
		}
		else
		{
			if(a>=0 && a<=100)
			{
			printf("Your Level is A\n");
	      	}
	      	else
	      	{
	      		printf("Warning!!You might input the wrong format");
			  }
		
	
		}
	}
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	float w = 0;
	float high = 0;
	float h = 0;
	printf("please input the value of your weight and your heigh(like 70 1.80)\n");
	scanf("%d %d",&w,&high);
	h = w/(high*high);
	if(h>=18 && h<=25)
	{
		printf("good shape");
	}
	else if(h>=25 && h<=30)
	{
		printf("a little fat");
	}
	else if(h>= 35 && h < 40)
	{
		printf("don't eat this lunch'");
	}
	else
	{
		printf("dail 120");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0;
	printf("nput the retire number:\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("break on Monday\n");
			break;
		case 2:
			printf("break on Tuesday\n");
			break;
		case 3:
			printf("break on Wednesday\n");
			break;
		case 4:
			printf("break on Thursday\n");
			break;
		case 5:
			printf("break on Friday\n");
			break;
		case 6:
			printf("break on Satursday\n");
			break;
		case 7:
			printf("break on Sunday\n");
			break;
		default:
			printf("input error!!");
			break;
	}
	return 0;
}
*/
