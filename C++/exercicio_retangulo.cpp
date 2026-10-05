#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){

    double area,altura, base, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt( pow(base, 2.0) + pow(altura, 2.0));

    cout << fixed << setprecision(4);

    cout << "Area do retangulo: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Diagonal: " << diagonal << endl;


}
