#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Choice an option\n";
    cout << "1-Add\n";
    cout << "2-Substract\n";
    cout << "3-Multiply\n";
    cout << "4-Divide\n";
    cout << "0-Close\n";
    cin >> number;
    if (number < 0 || number > 4)
    {
        cout << "The option is wrong, please choose an option available";
        return 0;
    }
    int first;
    int second;
    cout << "Enter a first number: ";
    cin >> first;
    cout << "Enter a second number: ";
    cin >> second;

    int result;
    switch (number)
    {
    case 1:
        result = first + second;
        cout << "The result is: " << result << endl;
        break;
    case 2:
        result = first - second;
        cout << "The result is: " << result << endl;
        break;
    case 3:
        result = first * second;
        cout << "The result is: " << result << endl;
        break;
    case 4:
        if (second == 0)
        {
            cout << "Cannot divide by 0";
            break;
        }
        result = first / second;
        cout << "The result is: " << result << endl;
        break;
    case 0:
        break;
    }
}