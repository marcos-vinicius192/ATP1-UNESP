#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insira um algarismo inteiro: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "O algarismo é par" << endl;
    } else {
        cout << "O algarismo é ímpar" << endl;
    }
    return 0;
}