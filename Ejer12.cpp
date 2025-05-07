#include <iostream>

using namespace std;

int main() {
  int a1, b2, c3;

    cout << "Ingrese los lados del triangulo: " << endl;
    cout << "Primer lado:\n";
    cin >> a1;
    cout << "Segundo lado:\n";
    cin >> b2;
    cout << "Tercer lado:\n";
    cin >> c3;
 
    if (a1 == b2 && b2 == c3) {
        cout << "Es un triangulo equilatero" << endl;
    }
    else if (a1 == b2 || a1 == c3 || b2 == c3) {
        cout << "Es un triangulo isosceles" << endl;
    }
    else {
        cout << "Es un triangulo escaleno" << endl;
    }
  return 0;
}