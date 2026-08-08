#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
	int num=10;
	for(j=1;j<=5;j++)
	{
		if(i==1||i==5||j==1||j==5)
			printf("%d",num);
		else
			printf(" ");
				num--;
			
			}
	
printf("\n");
}
return 0;
}