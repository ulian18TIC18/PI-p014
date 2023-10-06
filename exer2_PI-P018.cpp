#include <iostream>

using namespace std;

double celsiusParaFahrenheit(double temperaturaCelsius) {
    return (temperaturaCelsius * 9 / 5) + 32;

}

int main() {

    double tempCelsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> tempCelsius;

    double tempFahrenheit = celsiusParaFahrenheit(tempCelsius);

    cout << "A temperatura em Fahrenheit eh: " << tempFahrenheit << endl;

    return 0;
}
