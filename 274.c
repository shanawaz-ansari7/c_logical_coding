#include <iostream>
using namespace std;

// B1 – Array length and elements
void B1() {
    int x[] = {10, 30, 50, 60};
    int n = sizeof(x) / sizeof(x[0]);
    cout << n << "\n";
    cout << x[0] << "\n";
    cout << x[2] << "\n";
}
