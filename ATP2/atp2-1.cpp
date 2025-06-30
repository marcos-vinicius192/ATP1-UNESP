#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num;
    cout << "Insira um algarismo inteiro: ";
    cin >> num;
    if (num > 0) {
        cout << "O algarismo é positivo" << endl;
    } else if (num < 0) {
        cout << "O algarismo é negativo" << endl;
    } else {
        cout << "O algarismo é zero" << endl;
    }
    return 0;
}
