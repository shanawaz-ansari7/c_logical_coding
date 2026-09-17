#include <iostream>
using namespace std;
int main() {
    int x[] = {12,30,500,55};
    int n = sizeof(x)/sizeof(x[0]);
    for(int i=0;i<n;i++)
        cout << x[i] << "\n";
    return 0;
}
