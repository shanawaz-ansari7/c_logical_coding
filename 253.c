#include <stdio.h>
int main() {
    int x[]={1,2,3,5,61,3,19,7,22,9,80};
    int n=sizeof(x)/sizeof(x[0]), count=0;
    for(int i=0;i<n-count;i++) {
        if(x[i]<10) {
            for(int j=i;j<n-count-1;j++) x[j]=x[j+1];
            i--; count++;
        }
    }
    for(int i=0;i<n-count;i++) printf("%d ",x[i]);
    return 0;
}
