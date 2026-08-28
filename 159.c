
#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    int num=9;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("%d",num);

        printf("\n");	num--;
    }


    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
             printf("%d",num);

        printf("\n");
	num--;
    }

    return 0;
}

