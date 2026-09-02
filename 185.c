#include<stdio.h>

int main()
{
    int a[4][4];
    int i,j,k=1;
    int top=0,bottom=3,left=0,right=3;

    while(top<=bottom && left<=right)
    {
        for(j=left;j<=right;j++)
            a[top][j]=k++;
        top++;

        for(i=top;i<=bottom;i++)
            a[i][right]=k++;
        right--;

        for(j=right;j>=left;j--)
            a[bottom][j]=k++;
        bottom--;

        for(i=bottom;i>=top;i--)
            a[i][left]=k++;
        left++;
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%2d ",a[i][j]);

        printf("\n");
    }

    return 0;
}