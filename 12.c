#include<stdio.h>

int main()
{

for(int i=1;i<=4;i++){
         char ch='a';
	for(int j=1;j<=4;j++){
	if(j<=5-i)
		pritnf("%c",ch);
	else
		printf(" ");
	ch=ch+1;	
}
printf("\n")
}
return 0;
}