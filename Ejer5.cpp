#include <iostream>

using namespace std;
int main(){
    int n1;

    cout << "Ingrese la nota: \n";
    cin >> n1;

    if (n1 >= 6){
        cout << "Aprobado"<< endl;
    }
    else{
        cout << "Reprobado"<< endl;
    }
    return 0;
}

