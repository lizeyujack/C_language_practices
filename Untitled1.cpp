#include <stdio.h>
int main()
{
	int a_l,a_r,b_l,b_r,c_l,c_r,d_l,d_r;
	scanf("%d %d %d %d %d %d %d %d",&a_l,&a_r,&b_l,&b_r,&c_l,&c_r,&d_l,&d_r);
	int a,b,c,d;
	int i = 0;
	for(a = a_l ;a <= a_r; a++)
	{
		for(b= b_l ;b <= b_r; b++)
		{
			for(c= c_l ;c <= c_r; c++)
			{
				for(d= d_l ;d <= d_r; d++)
				{
					if ((a+b+c>d)||(a+b+d>c)||(a+c+d>b)||(b+c+d>a))
					{
						i++;
					}
				}
			}
		}
	}
	printf("%d",i);
	return 0;
}
