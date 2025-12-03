#include <iostream>
using namespace std;

int main() {
    int num, temp;
    string binary = "";

    cout << "Enter a decimal number: ";
    cin >> num;

    temp = num;

    if (temp == 0) {
        binary = "0";
    } else {
        while (temp > 0) {
            binary = char((temp % 2) + '0') + binary;
            temp /= 2;
        }
    }

    cout << "Binary: " << binary;

    return 0;
}
