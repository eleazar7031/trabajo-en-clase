#include <iostream>

using namespace std;

int main() {
  string contra;

    cout << "Ingrese contraseña: " << endl;
    cin >> contra;

    if (contra == "admin123") {
        cout << "Acceso concedido(Seguridad baja)" << endl;
    }

    else if (contra == "SecurePass2025") {
        cout << "Acceso concedido(Seguridad alta)" << endl;
    }

    else {
        cout << "Acceso denegado" << endl;
    }
  return 0;
}

