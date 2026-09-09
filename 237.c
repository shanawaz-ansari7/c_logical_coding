#include <stdio.h>
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    for(int i=2;i<n;i++)
        if(x[i-2]+x[i-1]==x[i]) printf("%d,",i);
    return 0;
