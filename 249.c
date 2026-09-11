#include <stdio.h>
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]), y[10];
    for(int i=0;i<4;i++) y[i]=x[i];
    for(int i=4;i<n-1;i++) y[i]=x[i+1];
    for(int i=0;i<n-1;i++) printf("%d ",y[i]);
    return 0;
}
