#include <iostream>
using namespace std;
int main() {
    int x[3] = {0};
    cout << 3 << "\n" << x[0] << "\n" << x[1] << "\n" << x[2] << "\n";
    x[0]=100; x[1]=34; x[2]=56;
    cout << x[0] << "\n" << x[1] << "\n" << x[2] << "\n";
    return 0;
}
