
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Aluno {
    string nome;
    float nota_exercicios;
    float nota_prova1;
    float nota_prova2;
};
float calcular_media(Aluno aluno) {
    float media = (aluno.nota_exercicios * 0.2) + (aluno.nota_prova1 * 0.4) + (aluno.nota_prova2 * 0.6);
    return media;
}

int main() {
    Aluno aluno;
    cout << "Insira o nome do aluno: ";
    getline(cin, aluno.nome);
    cout << "Insira a nota de exercícios (0 a 10): ";
    cin >> aluno.nota_exercicios;
    cout << "Insira a nota da prova 1 (0 a 10): ";
    cin >> aluno.nota_prova1;
    cout << "Insira a nota da prova 2 (0 a 10): ";
    cin >> aluno.nota_prova2;

    float media_final = calcular_media(aluno);
    cout << fixed << setprecision(2);
    cout << "A média final do aluno " << aluno.nome << " é: " << media_final << endl;

    return 0;
}