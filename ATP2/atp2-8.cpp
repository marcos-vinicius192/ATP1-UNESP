#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Insira os comprimentos dos lados do triângulo: ";
    cin >> a >> b >> c;
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        cout << "O triângulo é retângulo." << endl;
    } else {
        cout << "O triângulo não é retângulo." << endl;
    }
    return 0;
}