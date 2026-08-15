#include<stdio.h>

int main()
{
int i,j,n;
printf("Entern a number :");
scanf("%d",&n);
for(i=1;i<=n;i++)

{
	int num=1;
		for(j=1;j<=n;j++)
	{
		if(j==i||j==n+1-i)
			printf("%d",num); 	
		else
			printf(" ");
			num++;		
			}
			
printf("\n");
}
return 0;
}