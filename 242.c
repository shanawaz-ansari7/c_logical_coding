#include <stdio.h>
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    int temp=x[n-1];
    for(int i=n-1;i>0;i--) x[i]=x[i-1];
    x[0]=temp;
    for(int i=0;i<n;i++) printf("%d ",x[i]);
    return 0;
}
