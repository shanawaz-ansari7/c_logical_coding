#include <stdio.h>
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    int temp=x[0];
    for(int i=0;i<n-1;i++) x[i]=x[i+1];
    x[n-1]=temp;
    for(int i=0;i<n;i++) printf("%d ",x[i]);
    return 0;
}
