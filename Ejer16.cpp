#include <iostream>

using namespace std;

int main(){
  string usuario, contra;
    
    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;
    cout << "Ingrese la password: " << endl;
    cin >> contra;


    if (usuario == "Angel4091" && contra == "4091edition") {
        cout << "Usuario y password correctos"<< endl;
    }
    else if (usuario != "Angel4091"){
        cout << "Usuario incorrecto"<< endl;
    }
    if (contra == "4091edition") {
        cout << "Bienvenido Angel"<< endl;   
    }
    else if  (contra != "4091edition"){
        cout << "Password incorrecto"<< endl;
        cout <<"Tiene 2 intentos mas\n\n"<< endl;
    }
    
    
    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;
    cout << "Ingrese la password: " << endl;
    cin >> contra;
    if (usuario == "Angel4091") {
        cout << "Usuario y password correctos"<< endl;
    }
    else if (usuario != "Angel4091"){
        cout << "Usuario incorrecto"<< endl;
    }
    if (contra == "4091edition") {
        cout << "Bienvenido Angel"<< endl;
    }
    else if  (contra != "4091edition"){
        cout << "Password incorrecto"<< endl;
        cout <<"Tiene 1 intento mas\n\n"<< endl;
    }
    
    
    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;
    cout << "Ingrese la password: " << endl;
    cin >> contra;
    if (usuario == "Angel4091") {
        cout << "Usuario y password correctos"<< endl;
    }
    else if (usuario != "Angel4091"){
        cout << "Usuario incorrecto"<< endl;
    }
    if (contra == "4091edition") {
        cout << "Bienvenido Angel"<< endl; 
    }
    else if  (contra != "4091edition"){
        cout << "Password incorrecto"<< endl;
        cout <<"Acceso denegado, intentelo mas tarde"<< endl;
    }
  return 0;
}
