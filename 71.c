#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=10;i++)
{
	char ch='a';
		for(j=1;j<=4;j++)
	{
		if(j>=5-i&&j<=9-i)
			printf("%c",ch); 	
		else
			printf(" ");
			ch=ch+1;		
			}
			
printf("\n");
}
return 0;
}