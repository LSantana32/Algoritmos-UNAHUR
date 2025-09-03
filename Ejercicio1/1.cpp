#include <iostream>
using namespace std;   // ---->cin, cout y endl no están en el espacio de nombres global, sino dentro del namespace std

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number is: " <<number <<endl;
    return 0;  // ---> retorno exitoso
}