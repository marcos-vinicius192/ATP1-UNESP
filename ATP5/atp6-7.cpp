
#include <iostream>
using namespace std;

void calcular_circulo(float raio, float* perimetro, float* area) {
    const float PI = 3.14159;
    *perimetro = 2 * PI * raio;
    *area = PI * raio * raio;
}

int main() {
    float raio, perimetro, area;
    cout << "Insira o raio do círculo: ";
    cin >> raio;

    calcular_circulo(raio, &perimetro, &area);

    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area << endl;

    return 0;
}