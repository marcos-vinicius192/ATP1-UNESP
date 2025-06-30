/*
main pode ser chamada recursivamente?
Escreva um programa que contenha uma função main.
Inclua uma variável global count inicializada como 0.
Pós-incremente e imprima o valor de count cada vez que main for chamada.
Execute seu programa. O que acontece?
*/

#include <iostream>
using namespace std;

int count = 0;
int main() {
    count++;
    cout << "Count: " << count << endl;

    // Chamada recursiva de main
    if (count < 5) {
        main();
    }

    return 0;
}