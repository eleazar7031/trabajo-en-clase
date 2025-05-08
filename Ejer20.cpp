#include <iostream>

using namespace std;

int main(){
    int a1, b2, c3;

    cout << "Sistema de Calificación de Conducción" << endl;
    cout << "Ingrese su edad:\n";
    cin >> a1;
    cout << "Ingrese sus años de experiencia: \n"; 
    cin >> b2;
    cout << "Ingrese el numero de infracciones que ha tenido en los años de experiencia: \n";
    cin >> c3;

    if (a1 >= 21 && b2 >= 3 && c3 <= 5){
        cout << "Felicidades paso la prueba"<< endl;
    } else if (a1 <= 21){
        cout << "Edad insuficiente"<< endl;
        cout << "No paso la prueba";
    } else if (b2 <= 3){
        cout << "Tiene muy pocos años de experiencia"<< endl;
        cout << "No paso la prueba";
    } else if (c3 >= 5){
        cout << "Tiene muchas infracciones"<< endl;
        cout << "No paso la prueba";
    }


  return 0;
}
