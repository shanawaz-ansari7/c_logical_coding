#include <stdio.h>
int main() {
    int x[]={1,2,1,5,6,5,7,4,8,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    for(int i=1;i<n-1;i++)
        if(x[i-1]==x[i+1]) printf("%d,",i);
    return 0;
}
