#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cout << "Digite as tres medidas A, B e C: ";
    cin >> A >> B >> C;

    double quadrado = pow(A, 2);
    double triangulo = (A * B) / 2.0;
    double trapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "Area do quadrado = " << quadrado << endl;
    cout << "Area do triangulo = " << triangulo << endl;
    cout << "Area do trapezio = " << trapezio << endl;

    return 0;
}
