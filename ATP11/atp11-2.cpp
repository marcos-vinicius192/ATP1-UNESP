

#include <iostream>
#include <cmath> // Para usar a função round
#include <iomanip> // Para usar std::setprecision
using namespace std;

double arredondar(double valor, int casas = 0) {
    double fator = pow(10, casas);
    return round(valor * fator) / fator;
}

int main() {
    double valor;
    int casas;

    cout << "Insira o valor a ser arredondado: ";
    cin >> valor;

    cout << "Insira o número de casas decimais (padrão é 0): ";
    cin >> casas;

    double resultado = arredondar(valor, casas);
    
    cout << fixed << setprecision(casas) << "Valor arredondado: " << resultado << endl;

    return 0;
}