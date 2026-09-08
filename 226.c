#include <stdio.h>
int main() {
    int x[] = {10,30,50,60};
    int n = sizeof(x)/sizeof(x[0]);
    printf("%d\n", n);
    printf("%d\n", x[0]);
    printf("%d\n", x[2]);
    return 0;
}
