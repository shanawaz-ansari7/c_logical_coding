#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
	int num=1;
	for(j=1;j<=9;j++)
	{
	   if(j<=9-i && j>=1+i){
		printf("%d",num);
		num++;}
	
	   else
		printf(" ");

	
	}
        printf("\n");
}


for(i=1;i<=4;i++)
{
	char ch='A';
	for(j=1;j<=9;j++)
	{
	   if(j>=6-i && j<=4+i){
		printf("%c",ch);
		ch=ch+1;}
	
	   else
		printf(" ");
	}
        printf("\n");
}

return 0;
}