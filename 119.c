#include<stdio.h>

int main()
{
int i,j;
for(i=0;i<=10;i++)
{
	char ch='A';
	for(j=0;j<=13;j++)
	{
		if(j<=2+i||j>=1-i){if(i==0&&j==0) {printf(" ");}
			printf("|");}

		else
			printf("\n ");
		

		if(j<=2+i&&j>=i){
			printf("%d",num);ch=ch+1;}


		
	}

 printf("\n ");
}
return 0;
}