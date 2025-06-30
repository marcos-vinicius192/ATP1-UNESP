
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct Aluno {
    string nome;
    float nota_exercicios;
    float nota_prova1;
    float nota_prova2;
};

float calcular_media(const Aluno& aluno) {
    return (aluno.nota_exercicios * 0.2) + (aluno.nota_prova1 * 0.4) + (aluno.nota_prova2 * 0.6);
}

void imprimir_media(const vector<Aluno>& alunos) {
    cout << fixed << setprecision(2);
    for (const auto& aluno : alunos) {
        float media = calcular_media(aluno);
        cout << "A média final do aluno " << aluno.nome << " é: " << media << endl;
    }
}

int main() {
    vector<Aluno> alunos;
    int num_alunos;

    cout << "Quantos alunos deseja cadastrar? ";
    cin >> num_alunos;
    cin.ignore(); // Limpa o buffer do cin

    for (int i = 0; i < num_alunos; ++i) {
        Aluno aluno;
        cout << "Insira o nome do aluno: ";
        getline(cin, aluno.nome);
        cout << "Insira a nota de exercícios (0 a 10): ";
        cin >> aluno.nota_exercicios;
        cout << "Insira a nota da prova 1 (0 a 10): ";
        cin >> aluno.nota_prova1;
        cout << "Insira a nota da prova 2 (0 a 10): ";
        cin >> aluno.nota_prova2;
        cin.ignore(); // Limpa o buffer do cin
        alunos.push_back(aluno);
    }

    imprimir_media(alunos);

    return 0;
}