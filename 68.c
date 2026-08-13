#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=10;i++)
{
	
		for(j=1;j<=4;j++)
	{
		if(j>=5-i&&j<=9-i)
			printf("*"); 	
		else
			printf(" ");
					
			}
			
printf("\n");
}
return 0;
}