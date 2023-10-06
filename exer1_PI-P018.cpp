#include <iostream>

using namespace std;

int calcularFatorial(int numero) {

    if (numero < 0) {
        cout << "Nao eh possivel calcular fatorial de numero negativos." << endl;
        return -1; 
        
    } 
    else if (numero == 0 || numero == 1) {
        return 1; 
        
    } else {
        return numero * calcularFatorial(numero - 1);

    }
}

int main() {

    int num1, num2, num3, num4;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    int resultado1 = calcularFatorial(num1);

    if (resultado1 != -1) {
        cout << "O fatorial de " << num1 << " eh: " << resultado1 << endl;

    }

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    cout << "Digite o terceiro numero inteiro: ";
    cin >> num3;

    cout << "Digite o quarto numero inteiro: ";
    cin >> num4;

    int resultado2 = calcularFatorial(num2);
    int resultado3 = calcularFatorial(num3);
    int resultado4 = calcularFatorial(num4);

    cout << "O fatorial de " << num2 << " eh: " << resultado2 << endl;
    cout << "O fatorial de " << num3 << " eh: " << resultado3 << endl;
    cout << "O fatorial de " << num4 << " eh: " << resultado4 << endl;

return 0;
}
