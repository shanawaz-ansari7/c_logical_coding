#include <stdio.h>
int main() {
    int x[]={12,30,500,55,5,35,50,2,0,34};
    int n=sizeof(x)/sizeof(x[0]), sum=0;
    for(int i=0;i<n;i++) sum+=x[i];
    double avg=(double)sum/n;
    printf("Lesser than average values:\n");
    for(int i=0;i<n;i++)
        if(x[i]<avg) printf("%d\n",x[i]);
    return 0;
}
