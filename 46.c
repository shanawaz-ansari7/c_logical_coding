#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
	int num=1;
	for(j=1;j<=9;j++)
	{
		if(j>=6-i&&j<=4+i)
			printf("%d",num);
		else
			printf(" ");
			num--;	
			
			}
	
printf("\n");
}
return 0;
}