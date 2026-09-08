#include <stdio.h>
int main() {
    int x[3] = {0};
    printf("%d\n%d\n%d\n%d\n", 3, x[0], x[1], x[2]);
    x[0]=100; x[1]=34; x[2]=56;
    printf("%d\n%d\n%d\n", x[0], x[1], x[2]);
    return 0;
}
