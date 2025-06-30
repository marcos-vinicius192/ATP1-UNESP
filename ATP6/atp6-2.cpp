
#include <iostream>
using namespace std;

int somaRecursiva(int n) {
    if (n <= 1) {
        return n; // se n for 1 ou menor, retorna n
    }
    return n + somaRecursiva(n - 1); 
}

int main() {
    int n;
    cout << "Insira um número inteiro positivo: ";
    cin >> n;

    if (n < 1) {
        cout << "Numero não positivo colocado" << endl;
        return 1; // termina o programa se o número for inválido
    }

    int resultado = somaRecursiva(n);
    cout << "A soma de todos os números de 1 até " << n << " é: " << resultado << endl;

    return 0;
}