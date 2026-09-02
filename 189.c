#include<stdio.h>

int main()
{
    int i,j,n=5;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            int x=i;
            int y=j;

            if(n-i+1 < x)
                x=n-i+1;

            if(n-j+1 < y)
                y=n-j+1;

            printf("%d ",x<y ? x:y);
        }

        printf("\n");
    }

    return 0;
}