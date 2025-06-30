#include <iostream>
using namespace std;

int eh_palindromo(int num) {
    int original = num;
    int reverso = 0;

    while (num > 0) {
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }

    return (original == reverso) ? 1 : 0;
}

int main() {
    int num;
    cout << "Insira um número inteiro: ";
    cin >> num;

    if (eh_palindromo(num)) {
        cout << num << " é palíndromo." << endl;
    } else {
        cout << num << " não é palíndromo." << endl;
    }

    return 0;
}