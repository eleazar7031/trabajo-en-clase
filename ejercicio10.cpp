#include <iostream>
using namespace std;

int main(){
    float peso;
    cout<<"ingrese el peso del paquete segun los kg \n";
    cin>>peso

    if(peso <0){
        cout<<"valor no valido \n";
    }
    else{
        if(peso <= 5.00){
        cout<<" monto a cobrar es de $5 \n";
        }
        else{
            if(peso >=6 && peso <= 10.00){
                cout<<"monto a cobrar es de $10 \n";
            }
            else{
                cout<<"monto a cobrar es de $15 \n";
            }
        }
        
    }

    return 0;
}
