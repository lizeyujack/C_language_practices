/*#include<stdio.h> 
int main()
{
	int i = 0;
	int sum = 0;
	for(i = 1; ;i++)
	{
		sum += i;
		if(sum > 1000)
		{
		   break;
		}
	}
	printf("%d",i);
	return 0;
}*/
//print the binary format size
#include<stdio.h>
int main()
{
	char c = 0x53;//0101 0011
	int i = 0;
	while(1)
	{
	printf("\ninput a hixdecimal number:\n");
	scanf("%d",&c);
	for(i = 7;i >= 0;i--)
	{
		if(c & 0x1<<i)
		{
			printf("1");
		}
		else
		printf("0");
	}	
	}
	
	return 0;
 } 
