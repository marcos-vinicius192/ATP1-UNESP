#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insira um algarismo inteiro: ";
    cin >> num;
    cout << "O valor absoluto do algarismo é: ";
    if (num < 0) {
        cout << -num << endl;
    } else {
        cout << num << endl;
    }
    return 0;
}