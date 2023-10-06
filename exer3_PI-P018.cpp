
#include <iostream>
#include <cmath>

using namespace std;

struct Ponto{
    int x, y;

};

double calculaDistancia(Ponto &a, Ponto &b){
    return sqrt(pow(a.x - b.x,2.0) + pow(a.y - b.y,2.0));
}

int main(){

    Ponto p1, p2;

    cout << "Digite dois ponto p1 e p2: ";
    cin >> p1.x;
    cin >> p1.y;
    cin >> p2.x;
    cin >> p2.y;

    cout << "A distancia entre os pontos (" << p1.x << ", " << p1.y << ") e ("
    << p2.x << ", " << p2.y << ") eh : " << calculaDistancia(p1,p2) << endl;
    
return 0;
}