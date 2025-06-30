#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, media;
    cout << "Insira a primeira nota: ";
    cin >> nota1;
    cout << "Insira a segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    if (media >= 7.0) {
        cout << "Aprovado" << endl;
    } else if (media >= 5.0) {
        cout << "Recuperação" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}