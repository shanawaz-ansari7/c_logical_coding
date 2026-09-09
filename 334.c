#include <stdio.h>
int main() {
    int x[]={12,30,500,55,5,35,50,2,0,34};
    int n=sizeof(x)/sizeof(x[0]);
    printf("Even numbers:\n");
    for(int i=0;i<n;i++)
        if(x[i]%2==0) printf("%d,",x[i]);
    return 0;
}
