#include <iostream>
using namespace std;

int main(void) {
    int dia;
    cout<<"ingrese un numero del 1 al 7 \n";
      cout<<" 1= Lunes, 2= Martes...7=dimingo\n";
      cin>> dia;

    if (dia < 1) {
        cout << "El número es menor que 1. No es válido. \n";
    } 
    else if (dia > 7) {
    cout << "El número es mayor que 7. No es válido. \n";
    }
       else{
        if(dia<= 5){
        cout<<"dia laboral \n";
        }
        else{
        cout<<"es fin de semana\n";
        }
    }
    return 0;
