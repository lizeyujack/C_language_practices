/*
#include <stdio.h>
int main()
{
	char c = 0;
	scanf("%c",&c);
	c = c + 32;
	printf("c = %c",c);
	return 0;
 }
 */
 
 /*
#include <stdio.h>
int main() 
{
	int a = 0;// variant in here
	int b = 0;
	int sum = 0; 
	printf("please input two numbers here_.");
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("i + j = %d",sum);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	float r = 0;
	float S = 0;
	float L = 0;
	printf("please input the S of a circle");
	scanf("%f",&r);
	S = 3.14 * r * r;
	L = 2 * 3.14 * r;
	printf("S = %-10.2f\n",S);
	printf("L = %5.2f",L);
	return 0;
	
}
*/
/*
#include <stdio.h>
int main()
{
	int n = 0;
	int k = 7;
	int i = 0;
	int j = 0;
	printf("input the number of n:\n");
	scanf("%d",&n);
	i = n / k;
	j = n % k;
	printf("every child could get %d apple(s)\n",i);
	printf("There are %d apple(s) left",j);
	return 0; 
}
*/
#include <stdio.h>
int  main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	while(1){
	printf("input a two-digit number here:\n");
	scanf("%d",&n);
	i = n / 10;
	j = n % 10;
	k = j*10 + i;
	printf("%d\n",k);

}
	return 0;	
}
