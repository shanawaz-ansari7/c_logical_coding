#include <stdio.h>
int main() {
    int x[] = {12,30,500,55};
    int n = sizeof(x)/sizeof(x[0]);
    for(int i=0;i<n;i++)
        printf("%d,",x[i]);
    return 0;
}
