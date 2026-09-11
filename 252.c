#include <stdio.h>
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]), y[13];
    for(int i=0;i<n;i++) y[i]=x[i];
    for(int i=n+1;i>5;i--) y[i]=y[i-2];
    y[4]=100; y[5]=80;
    for(int i=0;i<n+2;i++) printf("%d ",y[i]);
    return 0;
}
