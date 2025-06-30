#include <iostream>
using namespace std;

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius;
    cout << "Insira a temperatura em Celsius: ";
    cin >> celsius;

    float fahrenheit = celsius_para_fahrenheit(celsius);
    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl;

    return 0;
}