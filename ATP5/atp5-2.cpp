// Crie uma função quadrática com variáveis a, b e c declaradas globalmente.
#include <iostream>
using namespace std;

float a, b, c;
float quadratica(float x) {
    return a * x * x + b * x + c;
}

int main() {
    cout << "Insira os coeficientes a, b e c da função quadrática: ";
    cin >> a >> b >> c;

    float x;
    cout << "Insira o valor de x: ";
    cin >> x;

    float resultado = quadratica(x);
    cout << "O valor da função quadrática para x = " << x << " é: " << resultado << endl;

    return 0;
}