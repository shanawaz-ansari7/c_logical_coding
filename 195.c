#include <stdio.h>
#include <windows.h>

int main()
{
    int i, j, pos;

    for(pos = 0; pos < 30; pos++)
    {
        system("cls");

        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < pos + i; j++)
                printf(" ");

            printf("*");
            printf("\n");
        }

        Sleep(100);
    }

    return 0;
}