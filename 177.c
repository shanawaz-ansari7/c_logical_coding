#include<stdio.h>
           code chnage 
int main()
{
int x[10],e,f,m,g,y;
y=0;
while(y<=9)
{
printf("enter a number :");
scanf("%d",&x[y]);
y++;
}
e=0;
while(e<8)
{
m=e;
f=e+1;
while(f<=9)
{
if(x[f]<=x[m])
{
m=f;
}
f++;
}
      g = x[e];
        x[e] = x[m];
        x[m] = g;
e++;
}
y=0;
while(y<=9){
printf("%d\n",x[y]);
y++;
}
return 0;
}