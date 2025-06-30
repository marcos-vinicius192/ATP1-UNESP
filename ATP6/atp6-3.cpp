
#include <iostream>
#include <cstdlib>

using namespace std;

int contarDigitos(int num) {
    if (num == 0) return 0; // se o número for 0, não há dígitos
    return 1 + contarDigitos(num / 10); //  chama recursivamente para o próximo dígito
}

int main() {
    int num;
    cout << "Insira um número inteiro positivo: ";
    cin >> num;

    if (num < 0) {
        cout << "Número não positivo colocado" << endl;
        return 1; // termina o programa se o número é inválido
    }

    int quantidade_digitos = contarDigitos(num);
    cout << "A quantidade de dígitos em " << num << " é: " << quantidade_digitos << endl;

    return 0;
}