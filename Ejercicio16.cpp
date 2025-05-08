#include <iostream>

using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string contrasenaCorrecta = "1234";
    string usuario, contrasena;
    int intentos = 0;

    while (intentos < 3) {
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contrasena: ";
        cin >> contrasena;

        if (usuario == usuarioCorrecto && contrasena == contrasenaCorrecta) {
            cout << "Acceso concedido." << endl;
            break;
        } 
        else if (usuario != usuarioCorrecto || contrasena != contrasenaCorrecta) {
            intentos++;
            cout << "Usuario o contrasena incorrectos. Intento " << intentos << " de 3." << endl;
        }

        if (intentos == 3) {
            cout << "Acceso denegado. Demasiados intentos fallidos." << endl;
        }
    }

    return 0;
}