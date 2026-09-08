#include <stdio.h>
int main() {
    int x[] = {12,30,500,55};
    int n = sizeof(x)/sizeof(x[0]);
    printf("[");
    for(int i=0;i<n;i++) {
        printf("%d",x[i]);
        if(i<n-1) printf(", ");
    }
    printf("]");
    return 0;
}
