#include <stdio.h>
int main() {
    int x[]={1,2,3,5,61,3,19,7,22,9,80};
    int n=sizeof(x)/sizeof(x[0]), count=0;
    for(int i=0;i<n;i++) if(x[i]%2!=0) count++;
    int y[count], j=0;
    for(int i=0;i<n;i++) if(x[i]%2!=0) y[j++]=x[i];
    for(int i=0;i<count;i++) printf("%d ",y[i]);
    return 0;
}
