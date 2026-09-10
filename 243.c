#include <stdio.h>
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    int temp=x[4];
    x[4]=100;
    for(int i=5;i<n;i++) {
        int temp1=x[i];
        x[i]=temp;
        temp=temp1;
    }
    for(int i=0;i<n;i++) printf("%d ",x[i]);
    return 0;
}
