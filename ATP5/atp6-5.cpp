

#include <iostream>
using namespace std;

int calcula_imc(float peso, float altura) {
    float imc = peso / (altura * altura);
    if (imc < 18.5) {
        return 0; // Magreza
    } else if (imc < 25.0) {
        return 1; // Saudável
    } else if (imc < 30.0) {
        return 2; // Sobrepeso
    } else {
        return 3; // Obesidade
    }
}

int main() {
    float peso, altura;
    cout << "Insira o peso (kg): ";
    cin >> peso;
    cout << "Insira a altura (m): ";
    cin >> altura;

    int resultado = calcula_imc(peso, altura);
    switch (resultado) {
        case 0:
            cout << "Magreza" << endl;
            break;
        case 1:
            cout << "Saudável" << endl;
            break;
        case 2:
            cout << "Sobrepeso" << endl;
            break;
        case 3:
            cout << "Obesidade" << endl;
            break;
    }

    return 0;
}