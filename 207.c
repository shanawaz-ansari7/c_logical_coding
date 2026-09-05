#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define WIDTH 60
#define HEIGHT 20

int main()
{
    int fire[HEIGHT][WIDTH];
    int x, y, i;

    srand(time(NULL));

    while (1)
    {
        /* Bottom row = fire source */
        for (x = 0; x < WIDTH; x++)
            fire[HEIGHT - 1][x] = rand() % 10;

        /* Fire movement upward */
        for (y = 0; y < HEIGHT - 1; y++)
        {
            for (x = 0; x < WIDTH; x++)
            {
                int below = fire[y + 1][x];
                int left = fire[y + 1][(x + WIDTH - 1) % WIDTH];
                int right = fire[y + 1][(x + 1) % WIDTH];

                fire[y][x] = (below + left + right) / 3;

                if (fire[y][x] > 0)
                    fire[y][x]--;
            }
        }

        system("cls");

        /* Display fire */
        for (y = 0; y < HEIGHT; y++)
        {
            for (x = 0; x < WIDTH; x++)
            {
                if (fire[y][x] >= 8)
                    printf("@");
                else if (fire[y][x] >= 6)
                    printf("^");
                else if (fire[y][x] >= 4)
                    printf("*");
                else if (fire[y][x] >= 2)
                    printf(".");
                else
                    printf(" ");
            }
            printf("\n");
        }

        Sleep(80);
    }

    return 0;
}