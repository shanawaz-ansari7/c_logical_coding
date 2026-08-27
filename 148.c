#include <stdio.h>

int main()
{
    int rows = 5;

      for (int i = 0; i < 2 * rows - 1; i++)
    {

               int n;
        if (i < rows)
           n = 2 * i + 1;
        else
            n = 2 * (2 * rows - i) - 3;

                for (int j = 0; j < n; j++)
            printf(" ");

                for (int k = 0; k < 2 * rows - n; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}