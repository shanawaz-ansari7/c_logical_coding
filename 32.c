#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
	int num=1;
	for(j=1;j<=5;j++)
	{
		if(j==6-i||j==i)
			printf("%d",num);
		else
			printf(" ");
			num++;	
			
			}
	
printf("\n");
}
return 0;
}