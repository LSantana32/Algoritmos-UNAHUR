#include <iostream>
using namespace std;

int main() {
    int N;
    unsigned long long factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> N;
    for(int i = 1; i <= N; i++)
        factorial *= i;
    cout << "Factorial: " << factorial << endl;
    return 0;
}
