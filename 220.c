#include <stdio.h>

int main()
{
    int i, j;
    int a = 0, b = 1, c;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            c = a + b;
            printf("%d ", c);

            a = b;
            b = c;
        }

        printf("\n");
    }

    return 0;
}