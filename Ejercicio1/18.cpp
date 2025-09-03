#include <iostream>
using namespace std;

int main() {
    int A, B, C = 0;
    cout << "Ingrese A: ";
    cin >> A;
    cout << "Ingrese B: ";
    cin >> B;
    for(int i = 0; i < B; i++)
        C += A;
    cout << "Resultado: " << C << endl;
    return 0;
}
