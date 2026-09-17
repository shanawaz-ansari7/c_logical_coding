#include <iostream>
using namespace std;
int main() {
    int x[] = {12,30,500,55};
    cout << "4\n" << x[0] << "\n" << x[1] << "\n" << x[2] << "\n" << x[3] << "\n";
    x[0]=100; x[1]=34; x[2]=56; x[3]=46;
    cout << x[0] << "\n" << x[1] << "\n" << x[2] << "\n" << x[3] << "\n";
    return 0;
}
