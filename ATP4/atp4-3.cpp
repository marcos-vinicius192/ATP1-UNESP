
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " é maior." << endl;
    } else if (num2 > num1) {
        cout << num2 << " é maior." << endl;
    } else {
        cout << "Esses números são iguais." << endl;
    }

    return 0;
}