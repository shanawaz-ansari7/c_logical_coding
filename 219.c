#include <stdio.h>

int main()
{
    int i, j, n = 2, count = 0, k, prime;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            while(1)
            {
                prime = 1;

                for(k = 2; k < n; k++)
                {
                    if(n % k == 0)
                    {
                        prime = 0;
                        break;
                    }
                }

                if(prime)
                {
                    printf("%d ", n);
                    n++;
                    break;
                }

                n++;
            }
        }

        printf("\n");
    }

    return 0;
}