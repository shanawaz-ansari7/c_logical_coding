#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
	char ch='i';
	for(j=1;j<=9;j++)
	{
		if(j>=6-i&&j<=4+i)
			printf("%c",ch);
		else
			printf(" ");
			ch=ch-1;
			
			}
	
printf("\n");
}
return 0;
}