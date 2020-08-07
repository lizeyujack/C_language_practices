#include <stdio.h>
#include <stdlib.h>

int day_diff(int *pDate1, int *pDate2)
{
int y2, m2, d2;
int y1, m1, d1;

m1 = (pDate1[1] + 9) % 12;
y1 = pDate1[0] - m1/10;
d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (pDate1[2] - 1);

m2 = (pDate2[1] + 9) % 12;
y2 = pDate2[0] - m2/10;
d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (pDate2[2] - 1);

return (d2 - d1)+1;
}


void datetointeger(char *pDate, int *pInteger)
{
char *pYear = &pDate[0];
char *pMonth = &pDate[5];
char *pDay = &pDate[8];
    
pInteger[0] = atoi(pYear);
pInteger[1] = atoi(pMonth);
pInteger[2] = atoi(pDay);
}


int main(void)
{
int i,j,m;
printf("input m");
scanf("%d",&m);
int str3[100];
char a[m][2];
for (i = 0; i < m; i++)
{
	scanf("%s %s",&a[i][0],&a[i][1]);
}
for (i = 0; i < m; i++)
{
int arr1[3] = {0};
int arr2[3] = {0}; 

datetointeger(a[i][0], arr1);
datetointeger(a[i][1], arr2);
str3[i] = day_diff(arr1, arr2);	
}
/*char str1[30], str2[30];
printf("Input: ");
scanf("%s%s\n", str1,str2);

int arr1[3] = {0};
int arr2[3] = {0}; 

datetointeger(str1, arr1);
datetointeger(str2, arr2);
str3[m] = day_diff(arr1, arr2);
*/
//printf("date2 - date1 = %d\n", day_diff(arr1, arr2));

for (i = 0; i <= m; i++)
{
	printf("%d\n",str3[i]);
} 

//printf("%s\n%s",str1,str2);

//char date1[] = "2020-07-20"; 
//char date2[] = "2020-07-25"; 
return 0;
}
