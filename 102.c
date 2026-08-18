#include<stdio.h>

int main()
{
int i,j,k=0;

for(i=1;i<=9;i++)
{
	int num=9;
	i<=5 ? k++ : k--;
		for(j=1;j<=9;j++)
	{
		if(j<=6-k||j>=4+k)
			printf("%d",num); 	
		else
			printf(" ");
			num--;		
			}
			
printf("\n");
}
return 0;
}