#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
	char ch='a';
	for(j=1;j<=5;j++)
	{
		if(i==1||i==5||j==1||j==5)
			printf("%c",ch);
		else
			printf(" ");
				ch=ch+1;
			
			}
	
printf("\n");
}
return 0;
}