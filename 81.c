#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=11;i++)
{
	char ch='K';
		for(j=1;j<=11;j++)
	{
		if(j>=i||j>=12-i)
			printf("%c",ch); 	
		else
			printf(" ");
			ch=ch-1;		
			}
			
printf("\n");
}
return 0;
}