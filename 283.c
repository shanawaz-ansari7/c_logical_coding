#include <iostream>
using namespace std;
int main() {
    int x[]={12,30,500,55,5,35,50,2,0,34};
    int n=sizeof(x)/sizeof(x[0]);
    for(int i=0;i<n;i+=2) cout << x[i] << ",";
    return 0;
}
