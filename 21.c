#include<stdio.h>

int main() 
{
int i,j;
	for(i=1;i<=5;i++)
	{
		char ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=4+i&&j>=6-i){
				printf("%c",ch);
				ch=ch+1;}
			else
				printf(" ");
				
		}
		
		printf("\n");	
	}
return 0;
}