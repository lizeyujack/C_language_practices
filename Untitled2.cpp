#include <stdio.h>
#include <math.h>
#define MAX 100
struct Line
{
	int low;
	int high;
};

void quicksort(struct Line a[],int l,int h)
{
    int i,j;
    struct Line t;
    i=l;
    j=h;
    t=a[l];
    while(i<j)
    {
        while(i<j && a[j].low>t.low)
            j--;
        if(i<j)
            a[i++]=a[j];
        while(i<j && a[i].low<=t.low)
            i++;
        if(i<j)
            a[j--]=a[i];
    }
    a[i]=t;
    if(l<i-1) quicksort(a,l,i-1);
    if(h>i+1) quicksort(a,i+1,h);
}

int hebing(struct Line a[],int n)
{
	int i;
	int count=0;
	int lasthigh;
	lasthigh=a[0].high;
	for (i=1;i<n;i++)
	{
		if (lasthigh>=a[i].low)  
			lasthigh=a[i].high;
		else  
		{
			a[count++].high=lasthigh;
			a[count++].low=a[i].low;
			lasthigh=a[i].high;
		}
	}
	a[count++].high=lasthigh;  
	return count;
}
 

void Search_souce(struct Line a[],int n,struct Line targt)
{
	int mid;
	int begin=0;
	int end=n;
	int flag=0;;
	while (begin<=end)
	{
		mid=begin+(end-begin)/2;
		if (a[mid].low<=targt.low &&a[mid].high>=targt.high)
		{
			flag=1;
			break;
		}
		else if (a[mid].low>=targt.high)
		{
			end=mid-1;
		}
		else if (a[mid].high<=targt.low)
			end=mid+1;
		else 
		{
			flag=0;
			break;
		}
	}
	if (1==flag)
		printf("yes\n");
	else 
		printf("No\n");
}
int main()
{
	struct Line a[]={2,3,1,2,4,9,3,4};
	struct Line Lines[MAX]={0};
	struct Line targt={1,6};
	int count=0;
	int i;
	quicksort(a,0,3);
	count=hebing(a,4);
	Search_souce(a,count,targt);
	for (i=0;i<count;i++)
		printf("%d %d ",a[i].low,a[i].high);
	printf("\n");
    printf("pause");
	return 0;
}
