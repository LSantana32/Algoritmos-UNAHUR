#include <iostream>
using namespace std;

int main() {
    double prev, num;
    char mas;
    cout << "Ingrese un numero: ";
    cin >> prev;
    bool asc = true, desc = true;
    cout << "Hay mas numeros? (s/n): ";
    cin >> mas;
    while(mas == 's' || mas == 'S') {
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num < prev) asc = false;
        if(num > prev) desc = false;
        prev = num;
        cout << "Hay mas numeros? (s/n): ";
        cin >> mas;
    }
    if(asc) cout << "Ascendente" << endl;
    else if(desc) cout << "Descendente" << endl;
    else cout << "No ordenados" << endl;
    return 0;
}
