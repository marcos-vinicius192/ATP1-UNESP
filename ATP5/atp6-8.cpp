#include <iostream>
#include <cmath>
using namespace std;

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    float x1, y1, x2, y2;
    cout << "Insira as coordenadas do primeiro ponto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Insira as coordenadas do segundo ponto (x2, y2): ";
    cin >> x2 >> y2;

    float dist = distancia(x1, y1, x2, y2);
    cout << "A distância entre os pontos é: " << dist << endl;

    return 0;
}
