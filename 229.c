#include <stdio.h>
int main() {
    int x[] = {12,30,500,55};
    printf("4\n%d\n%d\n%d\n%d\n", x[0],x[1],x[2],x[3]);
    x[0]=100; x[1]=34; x[2]=56; x[3]=46;
    printf("%d\n%d\n%d\n%d\n", x[0],x[1],x[2],x[3]);
    return 0;
}
