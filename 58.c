#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
	int num=5;
	for(j=1;j<=5;j++)
	{
		if(i==3||j==5)
			printf("%d ",num); 	
		else
			printf(" ");
			num--;			
			}
			
printf("\n");
}
return 0;
}