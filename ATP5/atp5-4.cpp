// Crie uma função eh_primo() que recebe um número inteiro e retorna 1 se for primo ou 0 caso contrário.

#include <iostream>
using namespace std;

int eh_primo(int num) {
    if (num <= 1) return 0; // numeros menores ou iguais a 1 não são primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // se for divisivel por algum número emtão não é primo
    }
    return 1; // eh primo
}

int main() {
    int num;
    cout << "Insira um número inteiro: ";
    cin >> num;

    if (eh_primo(num)) {
        cout << num << " é primo." << endl;
    } else {
        cout << num << " não é primo." << endl;
    }

    return 0;
}