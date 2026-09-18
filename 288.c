#include <iostream>
using namespace std;
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    int temp=x[0];
    x[0]=x[n-1];
    x[n-1]=temp;
    for(int i=0;i<n;i++) cout << x[i] << " ";
    return 0;
}
