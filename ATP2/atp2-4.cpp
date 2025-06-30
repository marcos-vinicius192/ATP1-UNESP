#include <iostream>
using namespace std;

int main() {
    int idade, tempo_servico;
    cout << "Insira a idade: ";
    cin >> idade;
    cout << "Insira o tempo de serviço (em anos): ";
    cin >> tempo_servico;

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        cout << "Você pode se aposentar." << endl;
    } else {
        cout << "Você não pode se aposentar." << endl;
    }

    return 0;
}