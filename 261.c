#include <stdio.h>
int main() {
    int x[]={3,7,15,9,1,12,5};
    int n=sizeof(x)/sizeof(x[0]);
    int min=x[0], max=x[0];

    for(int i=1;i<n;i++) {
        if(x[i]<min) min=x[i];
        if(x[i]>max) max=x[i];
    }

    int present[100]={0};
    for(int i=0;i<n;i++) present[x[i]]=1;

    printf("Missing elements: ");
    for(int i=min+1;i<max;i++)
        if(!present[i]) printf("%d,",i);
    return 0;
}
