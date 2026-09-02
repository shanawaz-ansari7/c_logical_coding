#include<stdio.h>

int main()
{
    int i,j,n=3;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i<=3 && j<=3)
            {
                if(i>j)
                    printf("%d ",i);
                else
                    printf("%d ",j);
            }
            else
            {
                int x=i>3 ? 6-i : i;
                int y=j>3 ? 6-j : j;

                printf("%d ",x>y ? x:y);
            }
        }

        printf("\n");
    }

    return 0;
}