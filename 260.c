#include <stdio.h>
int main() {
    int x[]={1,20,3,1,61,3,19,7,61,9,80};
    int y[]={50,61,3,45,1};
    int nx=11, ny=5, z[16], count=0;

    for(int i=0;i<nx;i++) {
        int found=0;
        for(int j=0;j<ny;j++)
            if(x[i]==y[j]) { found=1; break; }
        if(!found) {
            int dup=0;
            for(int k=0;k<count;k++) if(z[k]==x[i]) dup=1;
            if(!dup) z[count++]=x[i];
        }
    }
    for(int i=0;i<ny;i++) {
        int found=0;
        for(int j=0;j<nx;j++)
            if(y[i]==x[j]) { found=1; break; }
        if(!found) {
            int dup=0;
            for(int k=0;k<count;k++) if(z[k]==y[i]) dup=1;
            if(!dup) z[count++]=y[i];
        }
    }
    for(int i=0;i<count;i++) printf("%d ",z[i]);
    return 0;
}
