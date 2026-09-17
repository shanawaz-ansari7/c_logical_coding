B1 – Array length and elements
#include <iostream>
using namespace std;
int main() {
    int x[] = {10,30,50,60};
    int n = sizeof(x)/sizeof(x[0]);
    cout << n << "\n";
    cout << x[0] << "\n";
    cout << x[2] << "\n";
    return 0;
}
