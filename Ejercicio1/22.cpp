#include <iostream>
using namespace std;

int main() {
    double C, F;
    for(F = 0; F <= 200; F += 10) {
        C = 5.0/9.0 * (F - 32);
        cout << F << "F = " << C << "C" << endl;
    }
    return 0;
}
