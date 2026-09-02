#include<stdio.h>

int main()
{
    int i,j;
    char ch='A';

    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=5;j++)
                printf("%c ",ch++);
        }
        else
        {
            char temp=ch+4;

            for(j=1;j<=5;j++)
                printf("%c ",temp--);

            ch=ch+5;
        }

        printf("\n");
    }

    return 0;
}