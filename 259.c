#include <stdio.h>
int main() {
    int x[]={1,20,3,1,61,3,19,7,61,9,80};
    int y[]={50,61,3,45,1};
    int nx=11, ny=5, z[5], count=0;

    for(int i=0;i<nx;i++) {
        int found=0, available=0;
        for(int j=0;j<ny;j++)
            if(x[i]==y[j]) { found=1; break; }
        if(found) {
            for(int k=0;k<count;k++)
                if(z[k]==x[i]) { available=1; break; }
            if(!available) z[count++]=x[i];
        }
    }
    for(int i=0;i<count;i++) printf("%d ",z[i]);
    return 0;
}
