#include <iostream>
using namespace std;

int main() {
    int num, primero = INT_MIN, segundo = INT_MIN, tercero = INT_MIN;
    do {
        cin >> num;
        if(num == 0) break;
        if(num > primero) { tercero = segundo; segundo = primero; primero = num; }
        else if(num > segundo) { tercero = segundo; segundo = num; }
        else if(num > tercero) { tercero = num; }
    } while(num != 0);
    cout << "Tres mayores: " << primero << " " << segundo << " " << tercero << endl;
    return 0;
}
